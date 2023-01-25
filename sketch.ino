int value = 0;

void setup()
{
  pinMode (13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
sensorWert =analogRead(eingang); //Die Spannung an dem Fotowiderstand auslesen und unter der Variable „sensorWert“ abspeichern.
Serial.print("Sensorwert = " ); //Ausgabe am Serial-Monitor: Das Wort „Sensorwert: „
Serial.println(sensorWert); //Ausgabe am Serial-Monitor. Mit dem Befehl Serial.print wird der Sensorwert des Fotowiderstandes in Form einer Zahl zwischen 0 und 1023 an den serial monitor gesendet.

if (sensorWert > 512 ) //Wenn der Sensorwert über 512 beträgt….
{
digitalWrite(LED, HIGH); //…soll die LED leuchten…
}

else //andernfalls…
{
digitalWrite(LED, LOW); //….soll sie nicht leuchten.
}

delay (50);//Eine kurze Pause, in der die LED an oder aus ist

}//Mit dieser letzten Klammer wird der Loop-Teil geschlossen.

//Wenn nun der Sensorwert bei normaler Helligkeit bspw. nur den Wert 100 hat 
//(Der Wert ist abhängig von den verwendeten Widerständen, von der 
//Helligkeit und von der Stromrichtung), dann nimmt man anstelle des Wertes 
//512 einen wesentlich kleineren Wert, bei dem die LED zu leuchten beginnen
//soll. Bspw. nimmt man dann den Wert 90. Den aktuellen Sensorwert kann 
//man sich nun mit Hilfe des „Serial monitor“ anzeigen lassen. Dazu klickt man 
//oben auf „Tools“ und anschließend auf „serial monitor“. 
