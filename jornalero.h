#include "empleado.h"
#include "string.h"

using namespace std;

class Jornalero : public Empleado{
    private:
        int horas;
    public:
        Jornalero(string nombre, string cedula, int edad, int horas, Paga vh, Empresa* e);
        int getHoras();
        float getSueldoPeso();
        float getSueldoDolar();
        //~Jornalero();
};