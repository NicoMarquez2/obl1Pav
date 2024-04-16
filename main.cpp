#include <string.h>
#include <iostream>
#include <stdio.h>
#include "fijo.cpp"

using namespace std;

int main(){
    bool salir = false;
    int option = 0;
    Paga pagaEmp;
    Fijo empFijo("juan", "1334567", 43, pagaEmp);
    cout << "nombre:" << empFijo.getNombre() << endl;

    while(!salir){
        cout << "Ingrese la opción que desee:" <<endl;
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