/* 
LM35 Test programe

LM 35 left leg VCC, Center leg VOUT, right leg GND
LM35 VOUT is 10mV/C
analog input 0V-5V mapped to value range[0---1024]
Author: andy
Time: 2014.4.5
*/
//set the LM35 out put PIN
#define LM35 A8

void setup() {
    Serial.begin(115200);
}

void loop() {
   int t = analogRead(LM35);
   Serial.print("Read value is");
   Serial.println(t);
   //count the Value to temperature value
   float temperature = t * (5.0*1000/ 1023.0)/10;
   Serial.println(temperature);
   
   delay(2000);


}
