#include "Arduino.h"
#include "OledDisplay.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Screen.clean();
  Screen.print(0, "test");
}

void loop() {
  // put your main code here, to run repeatedly:


}
