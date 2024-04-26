#include <string.h>
#include <iostream>
#include <stdio.h>
#include "fijo.h"
#include "jornalero.h"
#define MAX_EMPRESA 3

using namespace std;

void agregarEmpresa(string nom, string nomLegal, int rut, Empresa* e){
    e->setNombre(nom);
    e->setNombreLegal(nomLegal);
    e->setRut(rut);
};

void setearEmpleadoFijo(string nom, string ci, int edad, Paga vh, Fijo* f, Empresa* e){
    f->setNombre(nom);
    f->setCI(ci);
    f->setEdad(edad);
    f->setValorHora(vh);
    f->setEmpresa(e);
}

void setearEmpleadoJornalero(string nom, string ci, int edad, Paga vh, int horas, Jornalero* j, Empresa* e){
    j->setNombre(nom);
    j->setCI(ci);
    j->setEdad(edad);
    j->setHoras(horas);
    j->setValorHora(vh);
    j->setEmpresa(e);
}

int main(){
    bool salir = false;
    int option = 0;
    int opcionEmpleado = 0;
    Empresa* empresa = new Empresa();
    string nombreEmpresa;
    string nombreLegal;
    int rut;
    
    Jornalero* empJor = new Jornalero();
    Fijo* empFijo = new Fijo();

    string nombreEmpleado;
    string ciEmpleado;
    int edadEmpleado;
    int horas;
    float monto;
    int monedaIngresada;
    Moneda monedaUs = us;
    Moneda monedaUsd = usd;
    Paga paga;

    while(!salir){
        cout << "\nIngrese la opcion que desee:" <<endl;
        cout << "1: Dar alta empresa" <<endl;
        cout << "2: Dar alta empleado" <<endl;
        cout << "3: Obtener total sueldo en dolares" <<endl;
        cout << "4: Obtener total sueldo en pesos" <<endl;
        cout << "5: Salir" <<endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "\n Ingrese el nombre de la empresa: ";
            cin >> nombreEmpresa;
            cout << "\n Ingrese el nombre legal de la empresa: ";
            cin >> nombreLegal;
            cout << "\n Ingrese el rut de la empresa: ";
            cin >> rut;

            agregarEmpresa(nombreEmpresa, nombreLegal, rut, empresa);
            break;
        case 2:
            if(empresa->getRut() == 0){
                cout << "\n Debe dar de alta una empresa";
                break;
            } else {
                cout << "\n Ingrese 1 para dar de alta un fijo o ingrese 2 para dar de alta un jornalero" << endl;
                cin >> opcionEmpleado;
                if(opcionEmpleado == 1){
                    cout << "Ingrese el nombre del empleado: " << endl;
                    cin >> nombreEmpleado;
                    cout << "Ingrese la cedula del empleado: " << endl;
                    cin >> ciEmpleado;
                    cout << "Ingrese la edad del empleado: " << endl;
                    cin >> edadEmpleado;
                    cout << "ingrese el monto del valor hora del empeleado: " << endl;
                    cin >> monto;
                    cout << "Ingrese la moneda de la paga (0 = us, 1 = usd): " << endl;
                    cin >> monedaIngresada;
                    
                    if(monedaIngresada == 0){
                        Paga p(monto, monedaUs);
                        setearEmpleadoFijo(nombreEmpleado, ciEmpleado, edadEmpleado, p, empFijo, empresa);
                    } else if (monedaIngresada == 1){
                        Paga p(monto, monedaUsd);
                        setearEmpleadoFijo(nombreEmpleado, ciEmpleado, edadEmpleado, p, empFijo, empresa);
                    } else {
                        cout << "\n Moneda incorrecta";
                        break;
                    }
                    empresa->addEmpleado(empFijo);

                } else if (opcionEmpleado == 2){
                    cout << "Ingrese el nombre del empleado: " << endl;
                    cin >> nombreEmpleado;
                    cout << "Ingrese la cedula del empleado: " << endl;
                    cin >> ciEmpleado;
                    cout << "Ingrese la edad del empleado: " << endl;
                    cin >> edadEmpleado;
                    cout << "ingrese el monto del valor hora del empeleado: " << endl;
                    cin >> monto;
                    cout << "Ingrese la moneda de la paga (0: us, 1: usd): " << endl;
                    cin >> monedaIngresada;
                    cout << "ingrese la cantidad de horas que trabaja el empleado: " << endl;
                    cin >> horas;

                    if(monedaIngresada == 0){
                        Paga p(monto, monedaUs);
                        setearEmpleadoJornalero(nombreEmpleado, ciEmpleado, edadEmpleado, p, horas, empJor, empresa);
                    } else if (monedaIngresada == 1){
                        Paga p(monto, monedaUsd);
                        setearEmpleadoJornalero(nombreEmpleado, ciEmpleado, edadEmpleado, p, horas, empJor, empresa);
                    } else {
                        cout << "\n Moneda incorrecta";
                        break;
                    }
                    empresa->addEmpleado(empJor);
                } else {
                    cout << "\nerror";
                }
            }
            break;
        case 3:
            if (empresa->getRut() == 0){
                cout << "\nIngrese primero una empresa";
            } else {
                cout << "El total de sueldo en dolares es: " << empresa->total_sueldo_dolar() << endl;
            }
            break;
        case 4:
            if (empresa->getRut() == 0){
                cout << "\nIngrese primero una empresa";
            } else {
                cout << "El total de sueldo en pesos es: " << empresa->total_sueldo_peso() << endl;
            }
            break;
        case 5:
            salir = true;
            break;
        default:
            cout << "Opcion invalida";
            break;
        }
    }
    return 0;
}