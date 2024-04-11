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
    float getMonto();
    Moneda getMoneda();
    ~Paga();
};
