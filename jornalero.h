#include "empleado.h"
#include "string.h"

using namespace std;

class Jornalero : public Empleado{
    private:
        int horas;
    public:
        Jornalero();
        float getSueldoPeso();
        float getSueldoDolar();
        ~Jornalero();
};