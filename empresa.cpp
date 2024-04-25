#include "empresa.h"
#include "string.h"

Empresa::Empresa(string nom, string nom_legal, int r){
   this->nombre = nom;
   this->nombre_legal = nom_legal;
   this->rut = r;
}

string Empresa::getNombre(){
    return this->nombre;
};

string Empresa::getNombreLegal(){
    return this->nombre_legal;
};

int Empresa::getRut(){
    return this->rut;
};

void Empresa::setNombre(string nom){
    this->nombre = nom;
};

void Empresa::setNombreLegal(string nom_legal){
    this->nombre_legal = nom_legal;
};

void Empresa::setRut(int r){
    this->rut = r;
};

/*void Empresa::addEmpleado(Empleado emp){
    this->emp[0] = emp;
};*/