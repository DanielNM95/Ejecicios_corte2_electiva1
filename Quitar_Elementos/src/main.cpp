#include <Arduino.h>

struct nodo{
 int dato;
 nodo *siguiente;
};

void agregarpila(nodo *& ,int);
void sacarpila(nodo *& ,int &);

void setup() {
 Serial.begin(115200);

 nodo *pila = NULL;
 int dato;

 Serial.print("dijite un numero:");
 while (!Serial.available());{
 }
 dato = Serial.parseInt();
 Serial.println(dato);
 agregarpila(pila,dato);
 
 Serial.print("dijite otro numero:");
 while (!Serial.available());{
 }
 dato = Serial.parseInt();
 Serial.println(dato);
 agregarpila(pila,dato);

 Serial.println("sancado elementos de la pila");
 while (pila != NULL){
  sacarpila(pila,dato);
  if (pila != NULL){
    Serial.print(dato);
    Serial.print(" , ");
  }else{
    Serial.print(dato);
    Serial.println(" . ");
  }
 }
 
}

void loop() {
}

void agregarpila(nodo *& pila ,int n){
 nodo *nuevo_nodo = new nodo();
 nuevo_nodo->dato = n;
 nuevo_nodo->siguiente = pila ;
 pila = nuevo_nodo;

 Serial.print ("el elemento  ");
 Serial.print(n);
 Serial.println("  a sido  agregado a la pila correctamente ");
}

void sacarpila (nodo *& pila ,int & n){
  nodo *aux = pila;
  n = aux->dato;
  pila = aux->siguiente;
  delete aux;
}