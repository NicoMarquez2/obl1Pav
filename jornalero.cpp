#include "jornalero.h"
#include "string"

Jornalero::Jornalero(string nombre, string cedula, int edad, int horas, Paga vh, Empresa* e) 
                    : 
                    Empleado(nombre, cedula, edad, vh, e), horas(horas) {};

float Jornalero::getSueldoPeso(){
    Paga paga = getValorHora();
    float monto = paga.getMonto();
    float tmp = Cambio::a_peso(monto);

    return (tmp * horas);
}

float Jornalero::getSueldoDolar(){
    Paga paga = getValorHora();
    float monto = paga.getMonto();
    float tmp = Cambio::a_dolar(monto);

    return (tmp * horas);
}