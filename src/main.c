#include <Arduino.h>
#include "avr8-stub.h"
#include "app_api.h"
#include "dpalg.h"


void setup() {
  debug_init();
}

void loop() {
  dp_top();  
}
