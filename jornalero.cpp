#include "jornalero.h"
#include "string"

Jornalero::Jornalero(string nombre, string cedula, int edad, int horas, Paga vh, Empresa* e) 
                    : 
                    Empleado(nombre, cedula, edad, vh, e), horas(horas) {};

int Jornalero::getHoras(){
    return this->horas;
}

float Jornalero::getSueldoPeso(){
    Paga paga = getValorHora();
    if (paga.getMoneda() == Moneda::us){
        return (paga.getMonto() * this->horas);
    } else {
        float monto = paga.getMonto();
        float tmp = Cambio::a_peso(monto);
        return (tmp * this->horas);
    }
}

float Jornalero::getSueldoDolar(){
    Paga paga = getValorHora();
    if (paga.getMoneda() == Moneda::usd){
        return (paga.getMonto() * this->horas);
    } else {
        float monto = paga.getMonto();
        float tmp = Cambio::a_dolar(monto);
        return (tmp * this->horas);
    }
}