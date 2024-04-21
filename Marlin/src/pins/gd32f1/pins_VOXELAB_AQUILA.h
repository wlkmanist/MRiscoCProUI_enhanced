/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * FFP0173_Aquila_Main_Board_V1.0.1 (GD32F103RC / N32G455RE)
 *
 * Uses CREALITY V4 (STM32F103RE / STM32F103RC) board pin assignments
 */

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME      "Aquila v1.0.1"
#endif
#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME "Aquila"
#endif

#define NO_MAPLE_WARNING              // Disable warning when compiling with Maple env

//
// Power Loss Detection
//
//#ifndef POWER_LOSS_PIN
//  #define POWER_LOSS_PIN      PA15  // PWRDET
//#endif

//#define LED                   PA3

/**    Debug port
 *       -----
 *       | 1 | VCC
 *       | 2 | PA13
 *       | 3 | PA14
 *       | 4 | GND
 *       -----
 */

/**
 * RET6 12864 LCD (Board)
 *        ------
 *  PC6  | 1  2 | PB2
 *  PB10 | 3  4 | PB11
 *  PB14   5  6 | PB13
 *  PB12 | 7  8 | PB15
 *   GND | 9 10 | +5V
 *        ------
 * 
 *   DWIN LCD Display
 *        ------
 *    NC | 1  2 | NC
 *     B | 3  4 | A
 *    EN   5  6 | BEEP
 *    RX | 7  8 | TX
 *   GND | 9 10 | VCC (+5V)
 *        ------
 */

/**     BL Touch
 *       -----
 *       | 1 | PB1
 *         2 | GND
 *       | 3 | PB0
 *         4 | +5V
 *       | 5 | GND
 *       -----
 */

#include "../stm32f1/pins_CREALITY_V4.h"
