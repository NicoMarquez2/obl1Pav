#include "fijo.h"
#include "string.h"

Fijo::Fijo(string nombre, string ci, int edad, Paga vh) : Empleado(nombre, ci, edad, vh) {}

float Fijo::getSueldoPeso(){
    float paga = getSueldoPeso();
    float tmp = Cambio::a_peso(paga);

    return (tmp * 40);
};

float Fijo::getSueldoDolar(){
    float paga = getSueldoDolar();
    float tmp = Cambio::a_dolar(paga);

    return (tmp * 40);
};