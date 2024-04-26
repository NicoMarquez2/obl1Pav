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
    Moneda moneda;
    Paga paga;

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
                    /*cout << "ingrese el monto del valor hora del empeleado: " << endl;
                    cin >> monto;
                    cout << "Ingrese la moneda de la paga (0 = us, 1 = usd): " << endl;
                    cin >> moneda;
                    
                    Paga p(monto, moneda);*/
                    setearEmpleadoFijo(nombreEmpleado, ciEmpleado, edadEmpleado, paga, empFijo, empresa);
                    empresa->addEmpleado(empFijo);

                } else if (opcionEmpleado == 2){
                    cout << "Ingrese el nombre del empleado: " << endl;
                    cin >> nombreEmpleado;
                    cout << "Ingrese la cedula del empleado: " << endl;
                    cin >> ciEmpleado;
                    cout << "Ingrese la edad del empleado: " << endl;
                    cin >> edadEmpleado;
                    /*cout << "ingrese el monto del valor hora del empeleado: " << endl;
                    cin >> monto;
                    cout << "Ingrese la moneda de la paga: " << endl;
                    cin >> moneda;*/
                    cout << "ingrese la cantidad de horas que trabaja el empleado: " << endl;
                    cin >> horas;

                    //Paga p(monto, moneda);
                    setearEmpleadoJornalero(nombreEmpleado, ciEmpleado, edadEmpleado, paga, horas, empJor, empresa);
                    empresa->addEmpleado(empJor);
                } else {
                    cout << "\nerror";
                }
            }
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

 /*Empresa* emp = new Empresa("empresa", "legal", 123456789);
    cout << "nombreE: " << emp->getNombre() << endl;
    cout << "legal: " << emp->getNombreLegal() << endl;
    cout << "rut: " << emp->getRut() << endl;
    Moneda monedaUs = us;
    Moneda monedaUsd = usd;
    Paga pagaEmp(13.78, monedaUs);
    cout << "\nmoneda: " << pagaEmp.getMoneda() << endl;
    cout << "monto: " << pagaEmp.getMonto() << endl;
    Jornalero* empJor = new Jornalero("pepe", "7654321", 25, 10, pagaEmp, emp);
    cout << "\nnombre: " << empJor->getNombre() << endl;
    cout << "paga: " << empJor->getValorHora().getMonto() << endl;
    cout << "moneda : " << empJor->getValorHora().getMoneda() << endl;
    cout << "horas: " << empJor->getHoras() << endl;
    cout << "paga total us: " << empJor->getSueldoPeso() << endl;
    cout << "paga total usd: " << empJor->getSueldoDolar() << endl;
    cout << "edad: " << empJor->getEdad() << endl;
    cout << "ci: " << empJor->getCI() << endl;
    cout << "JNDJKASDN: " << empJor->getEmpresa()->getNombre() << endl;

    Fijo* empFijo = new Fijo("juan", "1334567", 43, pagaEmp, emp);
    cout << "\nnombre: " << empFijo->getNombre() << endl;
    cout << "paga: " << empJor->getValorHora().getMonto() << endl;
    cout << "moneda : " << empJor->getValorHora().getMoneda() << endl;
    cout << "paga total us: " << empFijo->getSueldoPeso() << endl;
    cout << "paga total usd: " << empFijo->getSueldoDolar() << endl;
    cout << "edad: " << empFijo->getEdad() << endl;
    cout << "ci: " << empFijo->getCI() << endl;
    cout << "JNDJKASDN: " << empFijo->getEmpresa()->getNombre() << endl;

    emp->addEmpleado(empFijo);
    emp->addEmpleado(empJor);
    cout << "\nempleados: " << emp->getEmpleados()[0]->getNombre() << endl;
    cout << "empleados: " << emp->getEmpleados()[1]->getNombre() << endl;

    cout << "sueldo total peso: " << emp->total_sueldo_peso() << endl;
    cout << "\nsueldo total dolar: " << emp->total_sueldo_dolar() << endl;*/