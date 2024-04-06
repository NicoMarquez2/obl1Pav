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
    empleado(string nom, string ci, int e, Empresa* e);
    string getNombre();
    string getCI();
    int getEdad();
    Paga getValorHora();

    void setNombre(string nom);
    void setCI(string ci);
    void setEdad(int edad);
    void setValorHora(Paga valorHora);
    ~empleado();
};

empleado::empleado(/* args */)
{
}

empleado::~empleado()
{
}
