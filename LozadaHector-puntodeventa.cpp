//================================================


//==> Nombre del programa: Punto de Venta
//==> Archivo : LozadaHector-puntodeventa.cpp
//==>Autor: Héctor Escobar
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	float f, q=0, s=0, r, vb, viva, vdes, vfi, vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> r;
	
	do
	{
		cout<<"Ingrese el valor del producto " <<q+1 <<": " ;   cin>> f;
		q = q+1;
		s = s+f;
	}
	while(q<r);
	vb = s;
	viva = vb*0.12;
	vdes = vb*0.10;
	vfi = vb+viva;
	vft = vfi-vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<vfi<<endl;
	cout<<"Valor final es: "<<vft;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
	cout<<"//==> Archivo : LozadaHector-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Héctor Escobar"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
