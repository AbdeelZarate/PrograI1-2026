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
    int mes=0;
    cout<<"Ingrese un número entre 1 a 12: ";
    cin>>mes;
    switch (mes) //se hara uso de la herramienta switch para asignarle un número a cada mes//
    {   
    case 1:
        cout<<"Enero";
        break;
    case 2:
        cout<<"Febrero";
        break;
    case 3:
        cout<<"Marzo";
        break;
    case 4:
        cout<<"Abril";
        break;
    case 5:
        cout<<"Mayo";
        break;
    case 6:
        cout<<"Junio";
        break;
    case 7:
        cout<<"Julio";
        break;
    case 8:
        cout<<"Agosto";
        break;
    case 9:
        cout<<"Septiembre";
        break;
    case 10:
        cout<<"Octubre";
        break;
    case 11:
        cout<<"Noviembre";
        break;
    case 12:
        cout<<"Diciembre";
        break;
