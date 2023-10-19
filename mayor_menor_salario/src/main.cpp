#include <Arduino.h>


struct empleado{
  char nombre[20];
  float salario;  
}empleados[100];

void setup() {
  Serial.begin(115200);

  int n_empleados , posisionmay=0,posisionmen=0,i;
  float mayor =0 , menor= 999999;
  
  Serial.print("Ingrese Numero de Empleados: ");
  while (!Serial.available()){
  }
  n_empleados=Serial.parseInt();
  Serial.println(n_empleados);

  for(i=0;i<n_empleados;i++){
    fflush(stdin);
    Serial.print(". Nombre de Funcionario: ");
  
    Serial.println(empleados[i].nombre); 


    Serial.print(". dijite Salario: ");
    while (Serial.available()==0){
    }
    empleados[i].salario = Serial.parseFloat();
    Serial.println(empleados[i].salario,1);
  
    if (empleados[i].salario>mayor){
      mayor = empleados[i].salario;
      posisionmay = i;
    }
    if (empleados[i].salario<menor){
      menor = empleados[1].salario;
      posisionmen = i;
    }
  }

  Serial.println("Datos de Empleados con Mayor Salario");
  Serial.print("Nombre: ");
  Serial.println(empleados[posisionmay].nombre);
  Serial.print("Salario: ");
  Serial.println(empleados[posisionmay].salario);
  
  Serial.println("Datos de Empleados  con Menor Salario");
  Serial.print("Nombre: "); 
  Serial.println(empleados[posisionmen].nombre);
  Serial.print("Salario: ");
  Serial.println(empleados[posisionmen].salario);
}

void loop() {

}

