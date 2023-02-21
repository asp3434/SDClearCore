void input_map(){
  // Read the analog signal coming from the VFD
  vfd_analog_in = analogRead(VFD_read);

  // Get current time
  current_time = millis();

  // Read all data coming from the serial port
//  bool switcher = true;
//  while (Serial.available() > 0){
//    if (switcher){
//      String input_string = Serial.readStringUntil(':');
//    }
//      String input_string = Serial.readStringUntil(',');
//      Serial.print(input_string);
      
//    ser_pist = Serial.parseInt();
//    if (ser_pist == 1){
//      output_pist = !output_pist;
//    }
//  }
  
}
