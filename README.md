# 33225-Capteur pression température étanche GROVE

Capteur pression température étanche GROVE [33225](https://www.pierron.fr/capteur-de-presion-temperature-etanche-grove.html)

<div style="text-align: justify">Ce module, compatible Grove, permet de mesurer simultanément la température et la pression dans un liquide.
Ce module se raccorde sur une entrée analogique de la Base Shield via un câble 4 conducteur.</div>

Caractéristiques techniques :
- Alimentation : 3.3 à 5 V
- Plages de mesure :
- Pression : 260 à 1 260 hPa
- Température : -40 à 85 °C

![L-33225](/img/L-33225.jpg)

# Installation des fichiers dans IDE Arduino:
<div style="text-align: justify">Créer un nouveau répertoire nommé "Pierron..." dans le dossier "libraries" de votre dossier Arduino.
Y placer tous les fichiers.</div>
Ou
<div style="text-align: justify">télécharger le dépôt en ZIP et dans l'IDE Arduino : Croquis / inclure bibliothèque / ajouter la bibliothèque ZIP.</div>

<div style="text-align: justify">Pour utiliser la librairie dans votre propre projet, importez-la avec  Sketch > Import Library.</div>

# Usage :
Pour l’utilisation de ce module, référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33225](/img/SCH-33225.jpg)
![BRD-33225](/img/BRD-33225.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [LPS33HW](https://github.com/pierron-asco-celda/33129-Telemetre_ultrasons_GROVE/blob/main/src/Datasheet_NU40C16T-R-1.pdf)

# Exemples :
### Arduino / C++
```cpp
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
```
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr).
