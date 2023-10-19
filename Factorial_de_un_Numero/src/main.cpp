#include <Arduino.h>

int factorial (int);

void setup() {
  Serial.begin(115200);
  Serial.print ("numero factorial de 3: ");
  Serial.print(factorial(3));
}

void loop() {
  
}

int factorial (int numero){
  if (numero == 0){
     numero = 1;
  }else{
    numero = numero * factorial(numero-1);
  }
  return numero;
}


