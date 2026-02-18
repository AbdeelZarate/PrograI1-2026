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
    int edad=0;
    cout<<"Introduzca su edad: ";
    cin>>edad;
    if (18<edad && edad<25)
    {
        cout<<"La edad introducida Esta en el rango [18-25]"<<endl;
    }
    else
    {
        cout<<"La edad introducida No esta en el rango [18-25]"<<endl;
    }
    return 0;
}
