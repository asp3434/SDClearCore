// include libraries
#include "ClearCore.h"
//#include "input_map.ino"
//#include "output_map.ino"
//#include "operations.ino"
//#include "init_pin_modes.ino"

// initialize pins
const int VFD_analog = IO0;
const int VFD_read = A12;

// initialize some variables
int allowed_time = 2000;
int start_time = millis();
int output_i = 0;
int current_time = 0;
int vfd_analog_in = 0;
bool output_pist = false;
bool output_motor = false;
bool forward_motor = false;
int ser_int = 0;
bool change_speed = false;

void setup() {
  
  // initialize pin modes
  init_pin_modes();

  // initialize pin values
  Serial.begin(9600);
  ConnectorIO1.State(false);
  ConnectorIO2.State(false);
  ConnectorIO3.State(false);
  analogWrite(VFD_analog, 0, CURRENT);
}

void loop() {
  // read input signals
  input_map();
  
  // perform operations
  operations();
  
  // output signals
  output_map();
  
}
