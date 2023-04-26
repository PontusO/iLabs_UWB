/*
 * ----------------------------------------------------------------------------
 *                        _ _           _
 *                       (_) |         | |
 *                        _| |     __ _| |__  ___
 *                       | | |    / _` | '_ \/ __|
 *                       | | |___| (_| | |_) \__ \
 *                       |_|______\__,_|_.__/|___/
 *
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <pontus@ilabs.se> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return - Pontus Oldberg
 * ----------------------------------------------------------------------------
 */

#include "dw3000.h"

#define APP_NAME "READ DEV ID\r\n"

void setup() {
  while (!Serial)
    delay(100);
    
  Serial.begin(115200);
  Serial.println(APP_NAME);

  /* Start SPI and get stuff going*/
  spiBegin();
  spiSelect();

  delay(2); // Time needed for DW3000 to start up (transition from INIT_RC to IDLE_RC, or could wait for SPIRDY event)

  /* Reads and validate device ID returns DWT_ERROR if it does not match expected else DWT_SUCCESS */
  if (dwt_check_dev_id() == DWT_SUCCESS)
  {
      Serial.println("DEV ID OK");
  }
  else
  {
      Serial.println("DEV ID FAILED");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
