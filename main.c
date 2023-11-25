//  Rebeca Tourinho
//  February 2016
//  Built with Code Composer Studio v6
//***************************************************************************************

#include <msp430.h>
#include "uart2usb.h"
#include <stdint.h>

uint8_t flag=0;


int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;					// Stop watchdog timer

    //Init UC1
    UCA1_init();

    while(1)
    {

    	if(flag==RX_OK)
    	{
    		send_ping();
    		//send_string((char *) "BECA");		// Test 2
    		flag = RX_NOK;
    	}


    }

}

