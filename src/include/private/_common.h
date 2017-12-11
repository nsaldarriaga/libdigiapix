/*
 * Copyright 2017, Digi International Inc.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, you can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef PRIVATE__COMMON_H_
#define PRIVATE__COMMON_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <libsoc_board.h>

#include "common.h"

/**
 * config_check_alias() - Verifies the alias is valid
 *
 * @alias:	The alias to check.
 *
 * A valid alias is a not NULL an non-empty string.
 *
 * Return: EXIT_SUCCESS for a valid alias, EXIT_FAILURE otherwise.
 */
int config_check_alias(const char * const alias);

/**
 * config_get_gpio_kernel_number() - Find the GPIO Linux number id of an alias
 *
 * @alias:	The GPIO alias.
 *
 * Return: The kernel number, -1 on error.
 */
int config_get_gpio_kernel_number(const char * const alias);

/**
 * config_get_pwm_chip_number() - Find the chip PWM number of a given PWM alias
 *
 * @alias: The PWM alias.
 *
 * Return: The chip number, -1 on error.
 */
int config_get_pwm_chip_number(const char * const alias);

/**
 * config_get_pwm_channel_number() - Find the channel PWM number of a given PWM alias
 *
 * @alias: The PWM alias.
 *
 * Return: The PWM channel, -1 on error.
 */
int config_get_pwm_channel_number(const char * const alias);

/**
 * config_get_spi_device_number() - Find the SPI device number of a given alias
 *
 * @alias: The SPI alias.
 *
 * Return: The SPI device number, -1 on error.
 */
int config_get_spi_device_number(const char * const alias);

/**
 * config_get_spi_slave_number() - Find the SPI slave number of a given alias
 *
 * @alias: The SPI alias.
 *
 * Return: The SPI slave number, -1 on error.
 */
int config_get_spi_slave_number(const char * const alias);

/**
 * config_get_adc_chip_number() - Find the ADC chip number of a given alias
 *
 * @alias: The ADC alias.
 *
 * Return: The ADC device chip, -1 on error.
 */
int config_get_adc_chip_number(const char * const alias);

/**
 * config_get_adc_channel_number() - Find the ADC channel number of a given alias
 *
 * @alias: The ADC alias.
 *
 * Return: The ADC channel number, -1 on error.
 */
int config_get_adc_channel_number(const char * const alias);

/**
 * config_get_i2c_bus() - Find the I2C Linux bus id of an alias
 *
 * @alias:	The I2C alias.
 *
 * Return: The kernel number, -1 on error.
 */
int config_get_i2c_bus(const char * const alias);

/**
 * check_request_mode() - Verify that the given request mode is valid
 *
 * @request_mode:	The mode to check.
 *
 * Return: EXIT_SUCCESS if the mode is valid, EXIT_FAILURE otherwise.
 */
int check_request_mode(request_mode_t request_mode);

#ifdef __cplusplus
}
#endif

#endif /* PRIVATE__COMMON_H_ */
