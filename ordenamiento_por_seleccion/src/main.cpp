#include <Arduino.h>


void setup() {
 Serial.begin(115200);

 int numeros [] = {3,2,1,5,4} ;
 int recorrido1 ,recorrido2 ,auxiliar, minimo;

 for(recorrido1 = 0;recorrido1 < 5;recorrido1++){
   minimo = recorrido1 ;
   for(recorrido2 = recorrido1+1; recorrido2 <5; recorrido2++){
    if (numeros[recorrido2]<numeros[minimo]){
      minimo = recorrido2;
    }
   }
   auxiliar =numeros[recorrido1];
   numeros[recorrido1] = numeros[minimo];
   numeros[minimo] = auxiliar;
 }
 Serial.println("Orden Ascendente: ");
 for (recorrido1 = 0; recorrido1 <5;recorrido1++){
  Serial.println(numeros[recorrido1]);
 }
 Serial.println("Orden Descendente: ");
 for(recorrido1 = 4; recorrido1 >=0; recorrido1--){
   Serial.println(numeros[recorrido1]);
 }
}

void loop() {

}

