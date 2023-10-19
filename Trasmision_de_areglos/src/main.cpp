#include <Arduino.h>

int hallarMax (int * ,int);

void setup() {
  Serial.begin(115200);

  const int nElementos = 5;
  int numeros [nElementos] = {3,2,12,8,1};

  Serial.print("El Mayor Elemento Es: ");
  Serial.print(hallarMax(numeros,nElementos));

}

void loop() {

}

int hallarMax (int *DirVec,int nElementos){
  int maximo = 0;
  for(int i = 0 ; i < nElementos; i++){
    if(*(DirVec+i)>maximo){
      maximo = *(DirVec+i);
    }
  }
  return maximo;
}
