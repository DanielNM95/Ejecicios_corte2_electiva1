#include <Arduino.h>


void setup() {
 Serial.begin(115200);

 char Listado1[] = {'a','b','c','d','e'};
 char Listado2[] = {'f','g','h','i','j'};
 char listadofinal[10];

 for (int copia1 = 0; copia1 < 5 ; copia1++){
  listadofinal[copia1] = Listado1 [copia1];
 }

 for (int copia2 = 5; copia2 < 10; copia2++){
  listadofinal[copia2] = Listado2 [copia2-5];
 }
 
 for (int impresion = 0; impresion <10; impresion++){
  Serial.println(listadofinal[impresion]);
 }

}

void loop() {
}

