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

#ifndef GPIO_H
#define GPIO_H

/** @file gpio.h
 ** @brief Declaration of GPIO functions
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>
#include <stdbool.h>

/* === C++ Header ============================================================================== */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

/**
 * @brief Typedef for GPIO structure pointer.
 *
 * This typedef defines a pointer type (`gpio_t`) for the GPIO structure
 * (`gpio_s`). It is used to handle GPIO instances in the system.
 */
typedef struct gpio_s * gpio_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Creates a GPIO instance.
 *
 * Initializes a GPIO instance for the specified port and bit.
 *
 * @note The allocation could be dynamic or static depending on whether USE_DYNAMIC_ALLOCATION is
 * defined.
 *
 * @param port The GPIO port number.
 * @param bit The GPIO bit number.
 * @return gpio_t pointer to the GPIO instance, or `NULL` if the instance could not be created.
 */
gpio_t gpioCreate(uint8_t port, uint8_t bit);

/**
 * @brief Configures a GPIO as input or output.
 *
 * Sets the direction of the specified GPIO instance.
 *
 * @param gpio Pointer to the GPIO instance.
 * @param output `true` to configure as output, `false` to configure as input.
 */
void gpioSetOutput(gpio_t gpio, bool output);

/**
 * @brief Sets the state of a GPIO output.
 *
 * Changes the state of a GPIO configured as an output.
 *
 * @note This function only takes effect if the GPIO is configured as an output.
 *
 * @param gpio Pointer to the GPIO instance.
 * @param state `true` to set the GPIO high, `false` to set it low.
 */
void gpioSetState(gpio_t gpio, bool state);

/**
 * @brief Reads the state of a GPIO input.
 *
 * Retrieves the current state of the specified GPIO instance.
 *
 * @param gpio Pointer to the GPIO instance.
 * @return `true` if the GPIO is high, `false` if it is low.
 */
bool gpioGetState(gpio_t gpio);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */
