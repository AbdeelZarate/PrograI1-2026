// Materia: Programación I, Paralelo 4
// Autor: Abdeel Ricardo Zárate Calle
// Carnet: 13024920.
// Carrera del estudiante: ingenieria BIomedica.
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;
int main() 
{
    system("cls");
    float precio=0; //se usara float por el uso de decimales//
    float iva=0.13;
    float estandar=0;
    cout<<"Ingrese el precio del producto: ";
    cin>>precio;
    estandar=precio+precio*iva;//calculo del precio con iva//
    cout<<"Precio del producto con aplicación del IVA: "<<estandar<<endl; 
    
    return 0;
}
