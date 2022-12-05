int sensor=A0, soil;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial begin");
  delay(2000);
}

void loop() {
   soil = analogRead(sensor);
   Serial.println(String("Soil Val: ") + soil);
   soil=map(soil, 1023, 650, 0,100);
   Serial.println(String(" Value after mapped: ")+soil);
   if(soil>=80)
   {
    Serial.println("Enough water for plant");
   }
   else if(soil <=40)
   {
    Serial.println("water level is low");
   }
   else
   {
    Serial.println("Water level is OK");
   }
   delay(2000);
}
