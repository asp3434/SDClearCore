// include libraries
#include "ClearCore.h"

// initialize pins
const int VFD_analog = IO0;
const int VFD_read = A12;

void setup() {
  
  // initialize pin modes
  init_pin_modes();
  int allowed_time = 500;
  int start_time = millis();
  int output_i = 410;
}

void loop() {
  
  // read input signals
  input_map();
  
  // perform operations
  operations();
  
  // output signals
  output_map();
  
}