#include "cambio.h"

using namespace std;

float Cambio::a_peso(float cant){
    return cant / 39.05;
}

float Cambio::a_dolar(float cant){
    return cant * 39.05;
}