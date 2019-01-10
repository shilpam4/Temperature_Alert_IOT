// Temperature
#include <DHT.h>    //DHT11 DHT22 
DHT dht(D4, DHT11);   // intialize our DHT11

void setup(){
Serial.begin(57600);//sets the baud rate
    delay(10);
  dht.begin();   // dht monitoring
  pinMode(D4, INPUT);//sets the pin as an input to the arduino
  
}


void loop(void){
  
    float temperature = dht.readTemperature();
    if (temperature > 15 && temperature <60){
      Serial.println("Temprature Of the day for today is :");
      Serial.println(temperature);     
    }

    delay(60000);
}

