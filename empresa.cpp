#pragma once
#include "empresa.h"
#include "string.h"
#include "empleado.h"

Empresa::Empresa(string nom, string nom_legal, int r){
   this->nombre = nom;
   this->nombre_legal = nom_legal;
   this->rut = r;
   for (int i = 0; i < MAX_EMPLEADO; i++){
    this->emp[i] = nullptr;
   }
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

Empleado** Empresa::getEmpleados(){
    return this->emp;
}

void Empresa::setNombre(string nom){
    this->nombre = nom;
};

void Empresa::setNombreLegal(string nom_legal){
    this->nombre_legal = nom_legal;
};

void Empresa::setRut(int r){
    this->rut = r;
};

void Empresa::addEmpleado(Empleado* emp){
    int i = 0;
    while (i < MAX_EMPLEADO && this->emp[i] != nullptr)
        i++;
    
    if(i < MAX_EMPLEADO)
        this->emp[i] = emp;
};