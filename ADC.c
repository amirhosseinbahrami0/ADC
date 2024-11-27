/*
 * ADC.c
 *
 * Created: 11/21/2024 2:54:40 PM
 *  Author: Amir
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "ADC.h"

#define ADC_REF_SELECT 0b01000000  //Voltage Reference selection
#define ADC_INPUT_CHANNEL 0b00000000 //PIN A0
#define ADC_PRESCALER 0b00000111 //ADC Prescaler Selection(128)


/*
*@brief Initialize the ADC
*/
void adc_init(void){
	DDRA = 0x00;
	ADMUX = ADC_REF_SELECT | ADC_INPUT_CHANNEL;
	ADCSRA = ADC_PRESCALER;
	ADMUX |= (1 << ADLAR);	//Left_Justified
}

/*
*@brief get ADC value
*/
uint16_t adc_get(void){
	//Start Conversion
	ADCSRA |= (1 << ADSC);
	
	
}

/*
*@brief enable ADC for power save
*/
void adc_enable(){
	ADCSRA |= (1 << ADEN);
}

/*
*@brief disable ADC for power save
*/
void adc_disable(){
	ADCSRA &= ~(1 << ADEN);
}
