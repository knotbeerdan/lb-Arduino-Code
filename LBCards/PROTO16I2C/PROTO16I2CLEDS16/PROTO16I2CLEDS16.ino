// DIGIO16-I2C Example code
// Make all 16 lines outputs
// Blink each line, one at a time

#include <Wire.h>
#include "Adafruit_MCP23017.h"

Adafruit_MCP23017 mcp0;

void setup() {
  mcp0.begin(1);      // use default address 0
//  TWBR = 12;    // go to 400 KHz I2C speed mode

  for (uint8_t port = 0; port < 16; port++)
  {
    mcp0.pinMode(port, OUTPUT);
  }
}

// flip the pins up and down

void loop() {

  for (uint8_t port = 0; port < 16; port++)
  {
    mcp0.digitalWrite(port, HIGH);
    delay(250);
    mcp0.digitalWrite(port, LOW);
//    gdelay(250);
  }
}

