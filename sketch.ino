int value = 0;

void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  value = analogRead(A0);
  Serial.print("Value = ");
  Serial.println(value);
  if (value > 512 ){
    digitalWrite(13, 1);
  }
  else {
    digitalWrite(13, 0);
  }
  delay(50);
}
