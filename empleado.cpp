#include "empleado.h"
#include "string.h"

Empleado::Empleado(string nom, string ci, int edad, Paga vh, Empresa* e){
    this->nombre = nom;
    this->ci = ci;
    this->edad = edad;
    this->valor_hora = vh;
    this->empresa = e;
}

Empleado::Empleado(){
    this->nombre = "juan";
    this->ci = "9999999";
    this->edad = 100;
    this->valor_hora = Paga();
}

string Empleado::getNombre(){
    return this->nombre;
}
string Empleado::getCI(){
    return this->ci;
}
int Empleado::getEdad(){
    return this->edad;
}
Paga Empleado::getValorHora(){
    return this->valor_hora;
}

Empresa* Empleado::getEmpresa(){
    return this->empresa;
};

void Empleado::setNombre(string nom){
    this->nombre = nom;
}
void Empleado::setCI(string ci){
    this->ci = ci;
}
void Empleado::setEdad(int edad){
    this->edad = edad;
}
void Empleado::setValorHora(Paga vh){
    this->valor_hora = vh;
}

void Empleado::setEmpresa(Empresa* e){
    this->empresa = e;
};