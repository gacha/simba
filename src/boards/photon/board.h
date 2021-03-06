/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2018, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

#ifndef __BOARD_H__
#define __BOARD_H__

#define pin_d0_dev pin_device[23]
#define pin_d1_dev pin_device[22]
#define pin_d2_dev pin_device[21]
#define pin_d3_dev pin_device[20]
#define pin_d4_dev pin_device[19]
#define pin_d5_dev pin_device[15]
#define pin_d6_dev pin_device[14]
#define pin_d7_dev pin_device[13]

#define pin_a0_dev pin_device[37]
#define pin_a1_dev pin_device[35]
#define pin_a2_dev pin_device[34]
#define pin_a3_dev pin_device[5]
#define pin_a4_dev pin_device[6]
#define pin_a5_dev pin_device[7]

#define pin_led_dev pin_d7_dev

#define pin_dac0_dev pin_device[4]
#define pin_dac1_dev pin_device[5]

#define pwm_d0_dev pwm_device[0]
#define pwm_d1_dev pwm_device[1]
#define pwm_d2_dev pwm_device[2]
#define pwm_d3_dev pwm_device[3]
#define pwm_a4_dev pwm_device[4]
#define pwm_a5_dev pwm_device[5]

#define flash_0_dev flash_device[0]

/**
 * Convert given pin string to the pin number.
 *
 * @param[in] str_p Pin as a string.
 *
 * @return Pin number or negative error code.
 */
int board_pin_string_to_device_index(const char *str_p);

#endif
