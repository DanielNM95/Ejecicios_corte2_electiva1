#include <Arduino.h>

void intercambiar(int& , int&);

void setup() {
 Serial.begin(115200);

 int numero1 = 10;
 int numero2 = 15;

 Serial.print ("el valor de Numero 1 : ");
 Serial.println(numero1);
 Serial.print ("el valor de Numero 2 : ");
 Serial.println(numero2);
 Serial.println(" ");

 intercambiar(numero1 ,numero2);
 Serial.println("INTERCAMBIO");
 
 Serial.println(" ");
 Serial.print ("el nuevo valor de Numero 1 : ");
 Serial.println(numero1);
 Serial.print("el nuevo valor de Numero 2 : ");
 Serial.println(numero2);

}

void loop() {
  
}
void intercambiar (int& numero1 ,int& numero2){
 int auxiliar;
 auxiliar = numero1;
 numero1 = numero2;
 numero2 = auxiliar;
}
