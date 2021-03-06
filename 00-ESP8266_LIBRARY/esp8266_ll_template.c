/**	
   ----------------------------------------------------------------------
    Copyright (c) 2016 Tilen Majerle

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software, 
    and to permit persons to whom the Software is furnished to do so, 
    subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
    AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
   ----------------------------------------------------------------------
 */
#include "esp8266_ll.h"

/******************************************************************************/
/******************************************************************************/
/***   Copy this file to project directory and rename it to "esp8266_ll.c"   **/
/******************************************************************************/
/******************************************************************************/

uint8_t ESP_LL_Init(ESP_LL_t* LL) {
    /* Init UART with desired baudrated passed in LL structure */

    /* Init reset pin and set it high */

#if ESP_USE_CTS
    /* Init RTS pin as output and set it low */
#endif

    return 0;
}


uint8_t ESP_LL_SendData(ESP_LL_t* LL, const uint8_t* data, uint16_t count) {
    /* Send data via UART */

    /* Everything OK, data sent */
    return 0;
}


uint8_t ESP_LL_SetReset(ESP_LL_t* LL, uint8_t state) {
    /* Set reset pin */
    if (state == ESP_RESET_SET) {
        /* Set pin low */
    } else {
        /* Set pin high */
    }

    /* Everything OK, RST pin set according to state */
    return 0;
}

uint8_t ESP_LL_SetRTS(ESP_LL_t* LL, uint8_t state) {
    if (state == ESP_RTS_SET) {
        /* Set pin high */
    } else {
        /* Set pin low */
    }

    /* Everything OK, RTS pin set according to state */
    return 0;
}



/* UART receive interrupt handler */
void USART_RX_INTERRUPT_HANDLER_FUNCTION_NAME(void) {
	uint8_t ch;
	/* Get character from USART */
	
	
	/* Send received character to ESP stack */
	ESP_DataReceived(&ch, 1);
}
