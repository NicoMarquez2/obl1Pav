#include "empleado.h"
#include "string.h"

using namespace std;

class Jornalero : public Empleado{
    private:
        int horas;
    public:
        Jornalero(string nombre, string cedula, int edad, int horas, Paga vh, Empresa* e);
        Jornalero();
        int getHoras();

        void setHoras(int h);
        float getSueldoPeso();
        float getSueldoDolar();
        //~Jornalero();
};