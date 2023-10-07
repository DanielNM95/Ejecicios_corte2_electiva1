#include <Arduino.h>


void setup() {
Serial.begin(115200);
 int suma = 0 ,cantidadnumeros;

 Serial.print ("Dijite la cantidad de numeros: ");
 while (!Serial.available()){
  }
  cantidadnumeros = Serial.parseInt();
  Serial.println(cantidadnumeros);

 for (int i = 1; i <= cantidadnumeros; i++){
   suma += i ;
  }

 Serial.print ("La Suma es Igual:");
 Serial.println (suma);

}

void loop() {

}
