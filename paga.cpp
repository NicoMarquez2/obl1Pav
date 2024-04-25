#include "paga.h"

using namespace std;

Paga::Paga(){
    monto = 0;
    moneda = Moneda{us};
}

Paga::Paga(float monto, Moneda moneda){
    this->monto = monto;
    this->moneda = moneda;
}

float Paga::getMonto(){
 return this->monto;
}

Moneda Paga::getMoneda(){
    return this->moneda;
}

Paga Paga::a_dolar(){
    if (this->moneda != Moneda{usd})
        Paga(Cambio::a_dolar(this->monto), Moneda{us});
}

Paga Paga::a_peso(){
    if (this->moneda != Moneda{us})
        return Paga(Cambio::a_peso(this->monto), Moneda{usd});
}