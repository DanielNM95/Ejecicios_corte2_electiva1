#include <Arduino.h>


void setup() {
 char  letra ;
Serial.begin(115200);
Serial.print("Dijite un Caracter:");
while (!Serial.available()){
}
letra = Serial.read();
Serial.println (letra);

switch (letra)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u': 
   Serial.println("Es Una Vocal Minuscula");
  break;

default:
   Serial.println("no es una Vocal Minuscula");
  break;
}


}

void loop() {

}