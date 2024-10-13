#include <iostream>
#include <cstring>
#include <locale.h>
#include "clsPersona.h"
#include "Funciones.h"

using namespace std;

void Persona::cargar()
{
cout<<" INGRESE EL DNI DEL ALUMNO: ";
cin>>dniPersona;
cout<<endl<<"INGRESE EL/LOS NOMBRE/S DEL ALUMNO: ";
cargarCadena(nombre,50);
cout<<endl<<"INGRESE EL APELLIDO DEL ALUMNO: ";
cargarCadena(apellido,50);
cout<<endl<<"INGRESE LA FECHA DE NACIMIENTO DEL ALUMNO: ";
fechaDeNacimiento.cargar();

}
void Persona::mostrar()
{
    setlocale(LC_ALL,"");
    cout<<"EL DNI DEL ALUMNO ES: "<<dniPersona;
    cout<<endl<<"EL NOMBRE COMPLETO DEL ALUMNO ES: "<<nombre<<" "<<apellido;
    cout<<endl<<"EL ALUMNO NACIO EL AÑO: ";
    fechaDeNacimiento.mostrar();
}
void Persona::setNombre(const char *n)
{
strcpy(nombre,n);
}
void Persona::setApellido(const char *a)
{
    strcpy(apellido,a);
}

char Persona::getNombre()
{
    return *nombre;
}
char Persona::getApellido()
{
    return *apellido;
}
Fecha Persona::getFechaDeNacimiento()
{
    return fechaDeNacimiento;
}
