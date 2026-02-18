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
    int numero_1=0;//declaramos la variable
    cout<<"Ingrese un numero para saber si es par o impar: ";
    cin>>numero_1;
    
    if (numero_1%2==0)//aqui van los pares//
    {
        cout<<"El valor ingresado "<<numero_1<<" es par";
    }
    else //Aqui van los impares//
    {
        cout<<"El valor ingresado "<<numero_1<<" es impar";
    }
    return 0;
}
