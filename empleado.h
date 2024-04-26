#pragma once
#include <string.h>
#include "paga.h"
#include "empresa.h"

class Empleado
{
private:
    string nombre;
    string ci;
    int edad;
    Paga valor_hora;
    Empresa* empresa;
public:
    Empleado(string nom, string ci, int edad, Paga vh, Empresa* e);
    Empleado();
    string getNombre();
    string getCI();
    int getEdad();
    Paga getValorHora();
    Empresa* getEmpresa();

    void setNombre(string nom);
    void setCI(string ci);
    void setEdad(int edad);
    void setValorHora(Paga valorHora);
    void setEmpresa(Empresa* e);

    virtual float getSueldoPeso() = 0;
    virtual float getSueldoDolar() = 0;
    //~Empleado();
};
