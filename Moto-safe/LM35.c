/*
 * LM35.c
 *
 *  Created on: Feb 9, 2017
 *      Author: Tinh Ly
 */
#include "msp430g2553.h"
#include "LM35.h"

void init_lm35(){
    ADC10CTL0 = SREF_1 + ADC10SHT_2 + REFON  + ADC10ON + ADC10IE;
    ADC10CTL1 = INCH_0;    // chon kenh ngo vao A0
    ADC10AE0 |= 0x01;      // P2.0 ADC option select
}


float read_lm35()
{
    ADC10CTL0 |= ENC + ADC10SC;  // cho phep va bat dau chuyen doi
     __bis_SR_register(CPUOFF + GIE);  // che do tiet kiem nang luong
     return  (ADC10MEM/6.82);
}


// ADC10 interrupt service routine
#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR(void)
{  __bic_SR_register_on_exit(CPUOFF);    }
