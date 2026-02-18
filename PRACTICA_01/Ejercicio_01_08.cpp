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
    int numero_1=0;
    int numero_2=0;
    int numero_3=0;
    int numero_4=0;
    cout<< "Introduce el primer número ";
    cin>>numero_1;
    cout<< "Introduce el segundo número ";
    cin>>numero_2;
    cout<< "Introduce el tercer número ";
    cin>>numero_3;
    cout<< "Introduce el cuarto número ";
    cin>>numero_4;
    if (numero_4==numero_3)//usaremos if para comparar el ultimo numero con los otros 3//
    {
        cout<<"El número "<< numero_4 <<" coincide con el tercer número "<< numero_3<<endl;
        
    }
    else
    {
        if (numero_4==numero_2)
        {
            cout<<"El número "<< numero_4 <<" coincide con el segundo número "<< numero_2<<endl;
        }
        else
        {
            if (numero_4==numero_1)
            {
                cout<<"El número "<< numero_4 <<" coincide con el primer número "<< numero_1<<endl;
            }
            else //si no hay coincidencia no se le comparara//
            {
                cout<<"El número "<< numero_4 <<" no coincide con ningun número"<<endl;
            }
        }
    }
    return 0;
}
