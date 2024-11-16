/************************************************************************************************
Copyright (c) 2024, Lucas Meoli <meolilucas@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

/** @file main.c
 ** @brief Definition of the main function of the program.
 **/

/* === Headers files inclusions =============================================================== */

#include "main.h"
#include "gpio.h"

/* === Macros definitions ====================================================================== */

#define LED_RED_PORT        1
#define LED_RED_BIT         7

#define BUTTON_LED_RED_PORT 2
#define BUTTON_LED_RED_PIN  5

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================== */

int main(void) {
    gpio_t led_red = gpioCreate(LED_RED_PORT, LED_RED_BIT);
    gpio_t button_led_red = gpioCreate(BUTTON_LED_RED_PORT, BUTTON_LED_RED_PIN);

    gpioSetOutput(led_red, true);
    gpioSetOutput(button_led_red, false);

    while (true) {
        if (gpioGetState(button_led_red)) {
            gpioSetState(led_red, true);
        } else {
            gpioSetState(led_red, false);
        }
    }
}

/* === End of documentation ==================================================================== */
