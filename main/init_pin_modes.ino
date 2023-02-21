void init_pin_modes(){
  
  pinMode(VFD_analog, OUTPUT); // ANALOG PIN -- CONTROL VFD
  pinMode(VFD_read, INPUT); // ANALOG INPUT FROM VFD
  ConnectorIO1.Mode(Connector::OUTPUT_DIGITAL); // Digital PIN -- ENGAGE PISTON
  ConnectorIO2.Mode(Connector::OUTPUT_DIGITAL); // Digital PIN -- ENGAGE ROTATION MOTOR
}
