#include "cambio.h"
#define COTIZACION 39.05

using namespace std;

float Cambio::a_peso(float cant){
    return cant / COTIZACION;
}

float Cambio::a_dolar(float cant){
    return cant * COTIZACION;
}