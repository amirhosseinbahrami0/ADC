/*
 * ADC.h
 *
 * Created: 11/21/2024 3:09:20 PM
 *  Author: Amir
 */ 


#ifndef ADC_H_
#define ADC_H_

/*
*@brief Initialize the ADC
*/

void adc_init(void);

/*
*@brief get ADC value
*@return 16-bit value of analog/digital comparison
*/

uint16_t adc_get(void);


/*
*@brief enable ADC for power save
*/

void adc_enable(void);

/*
* @brief disable ADC for power save
*/

void adc_disable(void);

#endif /* ADC_H_ */