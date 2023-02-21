void output_map(){
 
  if (Serial.available() > 0){
    ser_int = Serial.parseInt();
    if (ser_int == 1){
      output_pist = !output_pist;
    }
    else if (ser_int == 69){
      output_motor = !output_motor;
    }
    else{
      change_speed = !change_speed;
    }
  }
  ConnectorIO1.State(output_pist);
  ConnectorIO2.State(output_motor);
//  if (Serial.available() > 0){
//    output_i = Serial.parseInt();
//  }
  if (change_speed){
    analogWrite(VFD_analog, ser_int, CURRENT);
    change_speed = !change_speed;
  }

  
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
