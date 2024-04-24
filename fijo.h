#include "empleado.cpp"
#include "string.h"

using namespace std;

class Fijo : public Empleado
{
public:
    Fijo(string nombre, string ci, int edad, Paga vh, Empresa* e);
    float getSueldoPeso();
    float getSueldoDolar();
    //~Fijo();
};
