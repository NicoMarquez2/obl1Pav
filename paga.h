#include <string>
#include "moneda.h"

class Paga
{
private:
    float monto;
    Moneda moneda;
public:
    Paga();
    Paga(float monto, Moneda moneda);
    Paga a_dolar();
    Paga a_peso();
    float getMonto();
    Moneda getMoneda();
    //~Paga();
};
