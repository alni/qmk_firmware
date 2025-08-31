/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE 0 // Sets the default hue value, if none has been set
//#define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 0 // Sets the default saturation value, if none has been set
//#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL 0 // Sets the default brightness value, if none has been set

#define RGB_MATRIX_VAL_STEP 4 //16

/* Turn off backlight on low brightness to save power */
//#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 32
#undef RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 4

//#define DYNAMIC_KEYMAP_LAYER_COUNT 5 // Increase layer count to 8, because why not
