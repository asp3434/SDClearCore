void output_map(){

  int current_time = millis();

  if  ((current_time - start_time) >= allowed_time) {
    if (output_i < 1847){
      output+=10;
    }
    else if (output_i >= 1847){
      output_i = 410;
    }
    start_time = millis();
  }

  analogWrite(VFD_analog, output_i, CURRENT);

  Serial.println(analogRead(VFD_read));

  Serial.println((output_i-410)/150);

  // analogWrite(VFD_analog, 2047, CURRENT); // 26.7 Hz value here can take a range of 410 to 2047. This corresponds to 4-20 mA output
}