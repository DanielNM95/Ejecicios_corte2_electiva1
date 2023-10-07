#include <Arduino.h>

  float a, b ;
  float  resultado =0;

void setup() {
  Serial.begin(115200);  

  Serial.print("Dijite un valor para A: ");
  while (Serial.available()==0){
  }
  a = Serial.parseFloat();
  Serial.println (a,1);


  Serial.print("Dijite un valor para B: ");
  while (Serial.available()==0){
  }
  b = Serial.parseFloat();
  Serial.println (b,1);

  resultado = a/b+ 1 ;
  
  Serial.print("El Resultado es: ");
  Serial.println(resultado ,1);

}

void loop() {
  
  
  
}


