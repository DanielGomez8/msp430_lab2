#ifndef switches_included
#define switches_included

#define SW0 BIT0                            /* Switch is p2.0 */
#define SW1 BIT1                            /* Switch is p2.1 */
#define SW2 BIT2                            /* Switch is p2.2 */
#define SW3 BIT3                            /* Switch is p2.3 */

#define SWITCHES (SW0 | SW1 | SW2 | SW3)    /* 4 switches on this board */

void switches_init();
void switch_interrupt_handler();

#endif
