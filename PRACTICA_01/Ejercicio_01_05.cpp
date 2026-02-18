// Materia: Programación I, Paralelo 4
// Autor: Abdeel Ricardo Zárate Calle
// Carnet: 13024920.
// Carrera del estudiante: ingenieria BIomedica.
// Fecha creación: 18/02/2026


#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    system("cls");
    float cateto_1=0;
    float cateto_2=0;
    float hipotenusa=0;
    cout<<"Ingrese el valor del primer cateto: ";
    cin>>cateto_1;
    cout<<"Ingrese el valor del segundo cateto: ";
    cin>>cateto_2;
    hipotenusa=sqrt(cateto_1*cateto_1+cateto_2*cateto_2);
    cout<<"El valor de la hpotenusa es: "<<hipotenusa<<endl;
    return 0;
}
