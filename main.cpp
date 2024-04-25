#include <string.h>
#include <iostream>
#include <stdio.h>
#include "fijo.h"
//#include "jornalero.h"

using namespace std;

int main(){
    bool salir = false;
    int option = 0;
    Empresa* emp = new Empresa("empresa", "legal", 123456789);
    cout << "nombreE: " << emp->getNombre() << endl;
    cout << "legal: " << emp->getNombreLegal() << endl;
    cout << "rut: " << emp->getRut() << endl;
    Paga pagaEmp;
    Fijo* empFijo = new Fijo("juan", "1334567", 43, pagaEmp, emp);
    cout << "nombre: " << empFijo->getNombre() << endl;
    cout << "paga: " << empFijo->getSueldoPeso() << endl;
    cout << "edad: " << empFijo->getEdad() << endl;
    cout << "ci: " << empFijo->getCI() << endl;
    cout << "JNDJKASDN: " << empFijo->getEmpresa()->getNombre() << endl;

    while(!salir){
        cout << "\nIngrese la opcion que desee:" <<endl;
        cout << "1: Dar alta empresa" <<endl;
        cout << "2: Dar alta empleado" <<endl;
        cout << "3: Obtener total sueldo en dólares" <<endl;
        cout << "4: Obtener total sueldo en pesos" <<endl;
        cout << "5: Salir" <<endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "2";
            break;
        case 3:
            cout << "3";
            break;
        case 4:
            cout << "4";
            break;
        case 5:
            salir = true;
            break;
        default:
            cout << "Opcion invalida";
            break;
        }
    }
    cout << "chau";
    return 0;
}