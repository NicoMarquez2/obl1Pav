#include "fijo.h"
#include "string.h"

Fijo::Fijo(string nombre, string ci, int edad, Paga vh, Empresa* e) : Empleado(nombre, ci, edad, vh, e) {}

Fijo::Fijo() : Empleado() {};

float Fijo::getSueldoPeso(){
    Paga paga = getValorHora();
    if (paga.getMoneda() == Moneda::us){
        return (paga.getMonto() * 40);
    } else {
        float monto = paga.getMonto();
        float tmp = Cambio::a_peso(monto);
        return (tmp * 40);
    }
};

float Fijo::getSueldoDolar(){
    Paga paga = getValorHora();
    if (paga.getMoneda() == Moneda::usd){
        return (paga.getMonto() * 40);
    } else {
        float monto = paga.getMonto();
        float tmp = Cambio::a_dolar(monto);
        return (tmp * 40);
    }
};