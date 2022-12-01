void output_map(){

  
  if (Serial.available() > 0){
    output_i = Serial.parseInt();
  }
  analogWrite(VFD_analog, output_i, CURRENT);
  
//  output_i = 2047;
//  if (millis()- start_time < 20000){
//    analogWrite(VFD_analog, output_i, CURRENT);
//    Serial.print(vfd_analog_in);
//    Serial.print(",");
//    Serial.print(output_i);
//    Serial.println(",");
//  }
//  else{
//    analogWrite(VFD_analog, 0, CURRENT);
//  }



  // analogWrite(VFD_analog, 2047, CURRENT); // 26.7 Hz value here can take a range of 410 to 2047. This corresponds to 4-20 mA output
}
