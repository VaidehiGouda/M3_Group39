#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#endif

#include "programmerdefinedfunc.h"
#include <stdio.h>

static void windowCondition(void);			   
static void alarmCondition(void);
static void carCondition(void); 		   
static void doorCondition(void);  


static void windowCondition(void)
{
	led_on(LED_ORANGE);
	led_on(LED_GREEN);
	led_on(LED_RED);
	led_on(LED_BLUE);
}


static void alarmCondition(void)
{
	led_off(LED_ORANGE);
	led_off(LED_GREEN);
	led_off(LED_RED);
	led_off(LED_BLUE);
}
static void carCondition(void) 
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}

static void doorCondition(void)
{

	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_RED);
	my_delay_ms(350);
	led_off(LED_RED);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
}


int main(void)
{

	allLed_init();
	button_init();

	while (1)
	{
		volatile int btnCount = btn_press();
        switch(btnCount)
        {
            case const 1: windowCondition();btnCount=0;
                          break;

            case const 2: alarmCondition();btnCount=0;
                          break;

            case const 3: carCondition();btnCount=0;
                          break;

            case const 4: doorCondition();btnCount=0;
                          break;

            default: break;   
                                                                  
        }
    }
		
}
