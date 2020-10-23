/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: felipelinzhao
 *
 * Created on October 23, 2020, 1:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
double PotenciaX(int base, int repeticiones);
double FactorialN(int repeticiones);

int main(int argc, char** argv) {

    int menu;
    cout << "1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Salida\n";
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 4) {
        switch (menu) {
            case 1:
            {

                break;
            }
            case 2:
            {
                int repeticiones, exp;
                double ValorEx = 0, ValorF = 0;
                long double resultado = 0;


                cout << "Ingrese el x de la funcion exponencial:" << endl;
                cin >> exp;

                cout << "Escoja cuantas veces quiere realizar la tarea:" << endl;
                cin >> repeticiones;

                for (int i = 0; i < repeticiones; i++) {
                    ValorEx = PotenciaX(exp, i);
                    ValorF = FactorialN(i);
                    resultado += ValorEx / ValorF;
                }

                cout << "resultado: " << resultado << endl;

                break;
            }
            case 3:
            {

                break;
            }
            default:
                cout << "No existe esa opcion\n";
                break;
        }
        cout << "1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Salida\n";
        cout << "Ingrese la opcion: ";
        cin >> menu;
    }




}

double PotenciaX(int base, int repeticiones) {

    if (repeticiones == 0) {
        return 1;
    } else {
        return base * PotenciaX(base, repeticiones - 1);
    }

}

double FactorialN(int repeticiones) {
    if (repeticiones == 0) {
        return 1;
    } else {
        return repeticiones * FactorialN(repeticiones - 1);
    }
}

