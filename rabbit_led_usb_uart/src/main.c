/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


#include <stdio.h>
#include "pico/stdlib.h"

#define PICO_DEFAULT_LED_PIN 17
const uint LED_PIN = PICO_DEFAULT_LED_PIN;

void init()
{
    stdio_init_all();

#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
#endif
}

int main() {

    init();

    bool led_state = false;
    while (true) 
    {
        printf("Hello, world!\n");
        if (led_state)
        {
            gpio_put(LED_PIN, 1);
            led_state = false;
        }
        else
        {
            gpio_put(LED_PIN, 0);
            led_state = true;
        }
        sleep_ms(1000);
    }
}
