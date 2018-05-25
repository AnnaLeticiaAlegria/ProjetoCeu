const byte left_sensor=11;
const byte right_sensor=3;
const byte front_sensor=A0;

void setup ()
{
   pinMode(left_sensor,INPUT);
   pinMode(right_sensor,INPUT);
   pinMode(front_sensor,INPUT);
   
   Serial.begin(9600);  
   Serial.println("starting");
   delay(1000);
}

void loop()
{
  Line_check();
  delay(100);
}
  
  void Line_check ()
{

      if ( digitalRead (left_sensor) == LOW && digitalRead(right_sensor)==LOW && digitalRead(front_sensor)==LOW ) {Serial.print("Line_left"); Serial.print("\t"); Serial.print("Line_right"); Serial.print("\t"); Serial.println("Line_front");}
      if ( digitalRead (left_sensor) == HIGH && digitalRead(right_sensor)==LOW && digitalRead(front_sensor)==LOW) {Serial.print("None"); Serial.print("\t"); Serial.print("Line_right");Serial.print("\t"); Serial.println("Line_front");}
      if ( digitalRead (left_sensor) == LOW && digitalRead(right_sensor)==HIGH && digitalRead(front_sensor)==LOW ) {Serial.print("Line_left"); Serial.print("\t"); Serial.print("None");Serial.print("\t"); Serial.println("Line_front");}
      if ( digitalRead (left_sensor) == LOW && digitalRead(right_sensor)==LOW && digitalRead(front_sensor)==HIGH ) {Serial.print("Line_left"); Serial.print("\t"); Serial.print("Line_right");Serial.print("\t"); Serial.println("None");}
      if ( digitalRead (left_sensor) == HIGH && digitalRead(right_sensor)==HIGH && digitalRead(front_sensor)==LOW ) {Serial.print("None"); Serial.print("\t"); Serial.print("None");Serial.print("\t"); Serial.println("Line_front");}
      if ( digitalRead (left_sensor) == HIGH && digitalRead(right_sensor)==LOW && digitalRead(front_sensor)==HIGH ) {Serial.print("None"); Serial.print("\t"); Serial.print("Line_right");Serial.print("\t"); Serial.println("none");}
      if ( digitalRead (left_sensor) == LOW && digitalRead(right_sensor)==HIGH && digitalRead(front_sensor)==HIGH ) {Serial.print("Line_left"); Serial.print("\t"); Serial.print("none");Serial.print("\t"); Serial.println("none");}
      if ( digitalRead (left_sensor) == HIGH && digitalRead(right_sensor)==HIGH && digitalRead(front_sensor)==HIGH ) {Serial.print("none"); Serial.print("\t"); Serial.print("none");Serial.print("\t"); Serial.println("none");}
}
