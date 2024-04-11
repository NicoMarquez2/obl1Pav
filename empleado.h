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
    //Empresa* empresa;
public:
    Empleado(string nom, string ci, int edad/*Empresa* e*/);
    Empleado();
    string getNombre();
    string getCI();
    int getEdad();
    Paga getValorHora();

    void setNombre(string nom);
    void setCI(string ci);
    void setEdad(int edad);
    void setValorHora(Paga valorHora);

    virtual float getSueldoPeso();
    virtual float getSueldoDolar();
    ~Empleado();
};
