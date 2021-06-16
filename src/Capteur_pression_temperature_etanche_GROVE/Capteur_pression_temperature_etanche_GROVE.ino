/*
    ** Mesure pression et température module Grove **
       PIN I2C Module shield GROVE capteur PIERRON 33225
       Utilisation fichiers Lps35hw.cpp & Lps35hw.h
*/

#include "Lps35hw.h"

Lps35hw capteur =  Lps35hw(0x5C);

unsigned long temps;
float pression;
float temperature;

void setup() {
  capteur.init();
  Serial.begin(9600);
  Serial.println("~Capteur pression et température étanche GROVE~");
  Serial.println("");
}
void loop() {
  pression = capteur.get_pressure();
  temperature = capteur.get_temperature();
  Serial.print("Pression : ");
  Serial.print(pression);
  Serial.print(" kPa");
  Serial.println("");
  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.print(" °C");
  Serial.println("");
  Serial.println("--------------------------------------------");
  delay(1000);
}
