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
    int numero_1=0;//
    int numero_2=0;
    int suma=0;
    int resta=0;
    int multiplicacion=0;
    int division=0;
    
    cout<<"Ingrese el primer número: ";
    cin>>numero_1;
    cout<<"Ingrese otro número: ";
    cin>>numero_2;
    
    suma= numero_1+numero_2;
    cout<<"La suma es "<<suma<<endl;
    resta= numero_1-numero_2;
    cout<<"La resta es "<<resta<<endl;
    multiplicacion= numero_1*numero_2;
    cout<<"La multiplicacion es "<<multiplicacion<<endl;
    division= numero_1/numero_2;
    cout<<"La division es "<<division<<endl;
    
    return 0;
}
