//================================================


//==> Nombre del programa: Compara
//==> Archivo : Compara.cpp
//==>Autor: Héctor Escobar
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int he_a, he_b ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> he_a;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> he_b;
	if (he_a==he_b)
		cout<<"Son iguales"<<endl;
	else
		if (he_a>he_b)
			cout<<he_a<<" es mayor"<<endl;
		else
			cout<<he_b<<" es mayor"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de 2 números"<<endl;
cout<<"//==> Archivo : compara.cpp"<<endl;
cout<<"//==>Autor: Héctor Escobar"<<endl;
cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
cout<<"//================================================="<<endl;
	
	return 0;
}
