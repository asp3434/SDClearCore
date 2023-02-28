String incomingString;
float setFreq;
float setForce;
int setRotation;
int setRunTime;
bool input_switcher = false;
int switcher_var;
void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0) {
//    incomingString = Serial.readString();
    incomingString = Serial.readStringUntil(':');
    Serial.print("I just recieved this: ");
    Serial.println(incomingString);
  if (incomingString == "Freq"){
    switcher_var = 1;
  }
  else if (incomingString == "Force"){
    switcher_var = 2;
  }
    switch (switcher_var) {
      case 1:
        setFreq = round(Serial.readStringUntil(',').toFloat());
        Serial.print("Freq: ");
        Serial.println(setFreq, 2);
        break;

      case 2:
        setForce = round(Serial.readStringUntil(',').toFloat());
        Serial.print("Force: ");
        Serial.println(setForce, 2);
        break;
    }


  }
}
