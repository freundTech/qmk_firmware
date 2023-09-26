/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#undef MANUFACTURER
#undef PRODUCT
#define MANUFACTURER    "freundTech"
#define PRODUCT         "Custom Redox"

/* Select hand configuration */
#define EE_HANDS

#define QMK_LED B7

#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS 5
#define BACKLIGHT_BREATHING


#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
