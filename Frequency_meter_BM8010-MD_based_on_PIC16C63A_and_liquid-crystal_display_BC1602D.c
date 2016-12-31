/*
Filename: Frequency_meter_BM8010-MD_based_on_PIC16C63A_and_liquid-crystal_display_BC1602D.c
Microcontroller PIC16C63A/65B/73B/74B
*/
#include<LiquidCrystal.h>
//
sbit LCD_RS at PORTE0_bit; //
sbit LCD_E at PORTE1_bit; //
sbit LCD_DB0 at PORTD0_bit; //
sbit LCD_DB1 at PORTD1_bit; //
sbit LCD_DB2 at PORTD2_bit; //
sbit LCD_DB3 at PORTD3_bit; //
sbit LCD_DB4 at PORTD4_bit; //
sbit LCD_DB5 at PORTD5_bit; //
sbit LCD_DB6 at PORTD6_bit; //
sbit LCD_DB7 at PORTD7_bit; //

//
sbit LCD_RS_direction at TRISE0_bit; //
sbit LCD_E_direction at TRISE1_bit; //
sbit LCD_DB0_direction at TRISD0_bit; //
sbit LCD_DB1_direction at TRISD1_bit; //
sbit LCD_DB2_direction at TRISD2_bit; //
sbit LCD_DB3_direction at TRISD3_bit; //
sbit LCD_DB4_direction at TRISD4_bit; //
sbit LCD_DB5_direction at TRISD5_bit; //
sbit LCD_DB6_direction at TRISD6_bit; //
sbit LCD_DB7_direction at TRISD7_bit; //

//
sbit BUTTON_SA2 at PORTB4_bit; //
sbit BUTTON_SA3 at PORTB5_bit; //
sbit BUTTON_SA4 at PORTB6_bit; //
sbit BUTTON_SA5 at PORTB7_bit; //

sbit BUTTON_SA2_direction at TRISB4_bit; //
sbit BUTTON_SA3_direction at TRISB5_bit; //
sbit BUTTON_SA4_direction at TRISB6_bit; //
sbit BUTTON_SA5_direction at TRISB7_bit; //




//
sbit CM_Q1 at PORTA0_bit; //
sbit CM_Q2 at PORTA1_bit; //
sbit CM_INAM at PORTB0_sbit; //
sbit CM_INBM at PORTB1_sbit; //

sbit CM_Q1_direction at TRISA0_bit; //
sbit CM_Q2_direction at TRISA1_bit; //
sbit CM_INAM_direction at TRISA0_sbit; //
sbit CM_INBM_direction at TRISA1_sbit; //

void main(){
//
const char MEASURE[] = {Hz};

}
