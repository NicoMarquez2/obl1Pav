#pragma once
#include <string>
#define MAX_EMPLEADO 50
using namespace std;

class Empleado;

class Empresa{
    private:       
        string nombre;
        string nombre_legal;
        int rut;
        Empleado* emp[MAX_EMPLEADO];
    public:
        Empresa(string nom, string nomLegal, int rut);
        Empresa();
        string getNombre();
        string getNombreLegal();
        int getRut();
        Empleado** getEmpleados();
        float total_sueldo_peso();
        float total_sueldo_dolar();

        void setNombre(string nom);
        void setNombreLegal(string nom_legal);
        void setRut(int r);
        void addEmpleado(Empleado* emp);
        //~Empresa();
};