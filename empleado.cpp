#include "empleado.h"
#include "string.h"

Empleado::Empleado(string nombre, string ci, int edad){
    nombre = nombre;
    ci = ci;
    edad = edad;
}

Empleado::Empleado(){
    nombre = "juan";
    ci = "1234567";
    edad = 32;
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