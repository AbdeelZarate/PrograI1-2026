// Materia: Programación I, Paralelo 4
// Autor: Abdeel Ricardo Zárate Calle
// Carnet: 13024920.
// Carrera del estudiante: ingenieria BIomedica.
// Fecha creación: 18/02/2026


#include<iostream>
using namespace std;

int main()
{
	int numero,unidades,decenas,centenas,millar;
	cout<<"Ingresa un número:  ";
	cin>>numero;
	
	//Aqui se extraeran unidades, decenas,centenas y millares
	//1948= 1000+900+40+8 =
	
	unidades=numero%10; numero/= 10;     //1948%10=8, numero=194 
	decenas=numero%10; numero/=10;       //194%10=4, numero=19
	centenas=numero%10; numero/= 10;     //19%10=9, numero=1
	millar=numero%10; numero/=10;        //1%10=1, numero=0
	
	switch(millar)
	{
		case 1: cout<<"M";break;        
		case 2: cout<<"MM";break;      
		case 3:	cout<<"MMM";break;        
	}
	
	switch(centenas)
	{
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	switch(decenas)
	{
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	switch(unidades)
	{
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
	return 0;
}
