#ifndef __PLATFORM_IO_H_
#define __PLATFORM_IO_H_

#include <libopencm3/stm32/gpio.h>

#define INPUT_PORT GPIOC

#define INPUT_PORT_PIN1 GPIO0
#define INPUT_PORT_PIN2 GPIO1
#define INPUT_PORT_PIN3 GPIO2
#define INPUT_PORT_PIN4 GPIO3
#define INPUT_PORT_PIN5 GPIO4
#define INPUT_PORT_PIN6 GPIO5
#define INPUT_PORT_PIN7 GPIO6
#define INPUT_PORT_PIN8 GPIO7
#define INPUT_PORT_PIN9 GPIO9
#define INPUT_PORT_PIN10 GPIO10
#define INPUT_PORT_PIN11 GPIO11
#define INPUT_PORT_PIN12 GPIO12
#define INPUT_PORT_PIN13 GPIO13
#define INPUT_PORT_PIN14 GPIO14
#define INPUT_PORT_PIN15 GPIO15


#define LOCKOUT_PORT GPIOD

#define LOCKOUT_PIN GPIO2


#define OUTPUT_PORT GPIOB

#define OUTPUT_PORT_PIN1 GPIO12
#define OUTPUT_PORT_PIN2 GPIO13
#define OUTPUT_PORT_PIN3 GPIO14
#define OUTPUT_PORT_PIN4 GPIO15

void io_reset_hardware(void);
void io_platform_init(void);

#endif /* __PLATFORM_IO_H_ */