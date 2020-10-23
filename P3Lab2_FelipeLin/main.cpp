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
#include <string>


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
                int ArregloPrimo[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 73, 79, 83, 89};
                int NumeroBase, posiscion_arreglo = 0, veces_repetidas = 0;
                bool continuar = false;
                string cadena = "";

                cout << "Ingrese el numero base: " << endl;
                cin >> NumeroBase;


                while (continuar == false) {
                    if (NumeroBase % ArregloPrimo[posiscion_arreglo] == 0) {
                        NumeroBase /= ArregloPrimo[posiscion_arreglo];
                        veces_repetidas++;

                    } else if (NumeroBase % ArregloPrimo[posiscion_arreglo] != 0) {

                        cadena += to_string(ArregloPrimo[posiscion_arreglo]);
                        cadena += "^";
                        cadena += to_string(veces_repetidas);
                        cadena += "*";
                        veces_repetidas = 0;
                        posiscion_arreglo++;
                    }

                    if (NumeroBase == 1) {
                        cadena += to_string(ArregloPrimo[posiscion_arreglo]);
                        cadena += "^";
                        cadena += to_string(veces_repetidas);
                        continuar = true;
                    }

                }

                cout << cadena << endl;


                break;
            }
            case 2:
            {
                int repeticiones;
                double ValorEx = 0, ValorF = 0, exp;
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
                int x = 0,numero_veces;
                int ArregloPascal[100];
                
                cout << "Cuantas veces lo va hacer: " << endl;
                cin >> numero_veces;
                for (int i = 1; i <= numero_veces; i++) {
                    for (int j = x; j >= 0; j--) {
                        if (j == x || j == 0) {
                            ArregloPascal[j] = 1;
                        } else {
                            ArregloPascal[j] = ArregloPascal[j] + ArregloPascal[j - 1];
                        }

                    }

                    x++;


                    for (int k = 0; k < x; k++) {
                        cout << "[" << ArregloPascal[k];
                    }
                    cout << "]" << endl;
                }


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

