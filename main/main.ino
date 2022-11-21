// include libraries
#include "ClearCore.h"

// initialize pins
const int VFD_analog = IO0;

void setup() {
  
  // initialize pin modes
  init_pin_modes();
  
}

void loop() {
  
  // read input signals
  input_map();
  
  // perform operations
  operations();
  
  // output signals
  output_map();
  
}
