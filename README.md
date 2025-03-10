# ADC-SC
 ATmega2560 ADC Single Conversion and Display

Anlog signal Digital conversion and Display using 7 segment LED

## step 01 - settings for ADMUX register
ADMUX

## Step 02 - setting ADCSRA register
Pre scaler
Use suitable frequency among 50 - 200 kHz = 125 kHz

frequency    Prescaler
125kHz       128

ADPS[2-0]  Division factor
111        128

## step 03 - Enable AD convertor - ADCSRA Register
Set 1 for ADEN - 1

# single conversion mode
To start should be set - ADSC  - 1
After conversion automatically ADSC set as 0