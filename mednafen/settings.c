/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <boolean.h>
#include "settings.h"

char retro_base_directory[1024];
uint32_t setting_ngp_language = 0;

uint64_t MDFN_GetSettingUI(const char *name)
{
   fprintf(stderr, "unhandled setting UI: %s\n", name);
   return 0;
}

int64_t MDFN_GetSettingI(const char *name)
{
   fprintf(stderr, "unhandled setting I: %s\n", name);
   return 0;
}

double MDFN_GetSettingF(const char *name)
{
   fprintf(stderr, "unhandled setting F: %s\n", name);
   return 0;
}

bool MDFN_GetSettingB(const char *name)
{
   if (!strcmp("cheats", name))
      return 0;
   /* LIBRETRO */
   if (!strcmp("ngp.language", name))
      return setting_ngp_language;
   fprintf(stderr, "unhandled setting B: %s\n", name);
   return 0;
}
