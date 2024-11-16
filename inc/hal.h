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

#ifndef HAL_H
#define HAL_H

/** @file hal.h
 ** @brief Declaration of HAL functions.
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

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Sets the direction of a GPIO pin.
 *
 * Configures the specified GPIO pin as either input or output.
 *
 * @param port The GPIO port number.
 * @param bit The GPIO pin bit.
 * @param output `true` to set the pin as output, `false` to set it as input.
 */
void hal_gpio_set_direction(uint8_t port, uint8_t bit, bool output);

/**
 * @brief Sets the state of a GPIO pin.
 *
 * Sets the specified GPIO pin to either high or low state.
 *
 * @param port The GPIO port number.
 * @param bit The GPIO pin bit.
 * @param state `true` to set the pin high, `false` to set it low.
 */
void hal_gpio_set_state(uint8_t port, uint8_t bit, bool state);

/**
 * @brief Reads the state of a GPIO pin.
 *
 * Returns the current state (high or low) of the specified GPIO pin.
 *
 * @param port The GPIO port number.
 * @param bit The GPIO pin bit.
 * @return `true` if the pin is high, `false` if it is low.
 */
bool hal_gpio_get_state(uint8_t port, uint8_t bit);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* HAL_H */
