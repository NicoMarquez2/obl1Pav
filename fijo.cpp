#include "fijo.h"
#include "string.h"

Fijo::Fijo(string nombre, string ci, int edad, Paga vh, Empresa* e) : Empleado(nombre, ci, edad, vh, e) {}

float Fijo::getSueldoPeso(){
    Paga paga = getValorHora();
    float monto = paga.getMonto();
    float tmp = Cambio::a_peso(monto);

    return (tmp * 40);
};

float Fijo::getSueldoDolar(){
    Paga paga = getValorHora();
    float monto = paga.getMonto();
    float tmp = Cambio::a_peso(monto);

    return (tmp * 40);
};