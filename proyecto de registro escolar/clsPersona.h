#ifndef CLSPERSONA_H_INCLUDED
#define CLSPERSONA_H_INCLUDED

#include "clsFecha.h"

class Persona{
protected:
    int dniPersona;
    char nombre[50];
    char apellido[50];
    Fecha fechaDeNacimiento;
    bool activo;
public:
    void cargar();
    void mostrar();
    void setNombre(const char *n);
    void setApellido(const char *a);
    char getNombre();
    char getApellido();
    Fecha getFechaDeNacimiento();


};

#endif // CLSPERSONA_H_INCLUDED
