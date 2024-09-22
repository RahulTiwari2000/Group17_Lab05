#include <stdint.h>
#include <stdbool.h>
#include "tm4c123gh6pm.h"
void init (void);
void GPIO_Handler(void);
void init(void)
{
    SYSCTL_RCGCGPIO_R |= 0x020;
                   GPIO_PORTF_LOCK_R = 0x4C4F434B;
                   GPIO_PORTF_CR_R |= 0x10;          // Allow changes to PF4
                       GPIO_PORTF_DIR_R = 0x02;
                       GPIO_PORTF_DEN_R = 0x12;

                       GPIO_PORTF_PUR_R = 0x10;

}



