#include <iostream>
#include "clsFecha.h"
#include <locale.h>

using namespace std;

void Fecha::cargar()
{
     setlocale(LC_ALL,"");

    cout<<endl<<"INGRESE EL DIA: ";
    cin>>dia;
    cout<<endl<<"INGRESE EL MES: ";
    cin>>mes;
    cout<<endl<<"INGRESE EL AÑO: ";
    cin>>anio;
    cout<<endl;
}
void Fecha::mostrar()
{
   cout<<dia<<"/"<<mes<<"/"<<anio;
}
void Fecha::setDia(int d)
{
}
void Fecha::setMes(int m)
{
}
void Fecha::setAnio(int a)
{
}
int Fecha::getDia()
{
}
int Fecha::getMes()
{
}
int Fecha::getAnio()
{
}

