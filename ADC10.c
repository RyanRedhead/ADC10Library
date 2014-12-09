

/*
 * main.c
 */

#include "ADC10.h"
#include <msp430.h>

unsigned short readvalue(int pinnumber) {

	BCSCTL1 = CALBC1_8MHZ;									// 8MHz clock
	DCOCTL = CALDCO_8MHZ;

	ADC10CTL0 = 0;									//P1.4
	ADC10CTL1 = ADC10DIV_3 ;

	if (pinnumber == 2){
		ADC10CTL1 = INCH_2;									// Channel 0
		ADC10AE0 = BIT2;
	}
	else if (pinnumber == 3){
		ADC10CTL1 = INCH_3;									// Channel 0
		ADC10AE0 = BIT3;
	}
	else if (pinnumber == 4){
		ADC10CTL1 = INCH_4;									// Channel 0
		ADC10AE0 = BIT4;
	}

	ADC10CTL0 = SREF_0 | ADC10SHT_3 | ADC10ON | ENC;
	ADC10CTL0 |= ADC10SC;									// Start a conversion
	while(ADC10CTL1 & ADC10BUSY);							// Wait for conversion to complete
	return ADC10MEM;

}
