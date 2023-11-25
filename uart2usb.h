//  Rebeca Tourinho
//  February 2016
//  Built with Code Composer Studio v6
//***************************************************************************************

#include <stdint.h>

#define RX_OK 1
#define RX_NOK 0

void UCA1_init(void);
void USBsendChar(char character);
void send_string(char *string);
void send_array(uint8_t *array);
void send_ping(void);

