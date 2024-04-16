#include <string>
#define MAX_EMPLEADO 50
using namespace std;

class Empresa{
    private:       
        string nombre;
        string nombre_legal;
        int rut;
        //Empleado emp[MAX_EMPLEADO];
    public:
        Empresa(string nom, string nomLegal, int rut);
        Empresa();
        string getNombre();
        string getNombreLegal();
        int getRut();

        void setNombre();
        void setNombreLegal();
        void setRut();
        ~Empresa();
};