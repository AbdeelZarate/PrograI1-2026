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
    float nota_1=0;//declarando la variable de las notas para usar decimales//
    float nota_2=0;
    float nota_3=0;
    float notaFinal=0;
    float practicas=0.3;//declarando el valor de cada nota y su % final//
    float teorica=0.6;
    float participacion=0.1;
    
    cout<<"Ingrese la nota de practicas: ";
    cin>>nota_1;
    cout<<"Ingrese la nota teorica: ";
    cin>>nota_2;
    cout<<"Ingrese la nota de participacion: ";
    cin>>nota_3;
    notaFinal=(nota_1*practicas)+(nota_2*teorica)+(nota_3*participacion);
    cout<<"La nota final es de: "<<notaFinal <<endl;
    return 0;
}
