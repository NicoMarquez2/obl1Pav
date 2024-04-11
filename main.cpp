#include <string>
#include <iostream>
#include <stdio.h>
#include "empleado.cpp"

using namespace std;

int main(){
    string hola = "holaa";
    cout << "hola" << endl << hola <<endl;

    Empleado *e = new Empleado("hola", "1234567", 32);
    cout << e->getNombre() << endl;
    return 0;
}