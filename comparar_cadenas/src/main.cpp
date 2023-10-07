#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  char palabra1 [] = "Hola";
  char Palabra2 [] = "Hola";

  if(strcmp(palabra1,Palabra2)==0){
    Serial.print("Ambas Cadenas son Iguales");
  }
  else{
    Serial.print("Ambas Cadenas  no son Iguales");
  }
}

void loop() {

}


