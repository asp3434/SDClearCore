// include libraries
#include "ClearCore.h"

// initialize pins
const int VFD_analog = IO0;
const int VFD_read = A12;

// initialize some variables
int allowed_time = 2000;
int start_time = millis();
int output_i = 0;
int current_time = 0;
int vfd_analog_in = 0;

void setup() {
  
  // initialize pin modes
  init_pin_modes();
  Serial.begin(9600);
}

void loop() {
  
  // read input signals
  input_map();
  
  // perform operations
  operations();
  
  // output signals
  output_map();
  
}
