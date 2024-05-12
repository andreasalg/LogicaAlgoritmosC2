/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares.*/

#include <iostream>

using namespace std;

int main() {
    const int TAMANIO = 10;
    int numeros[TAMANIO];
    int pares = 0;
    int impares = 0;

    cout << "Ingrese 10 numeros enteros:" << endl;

    int i = 0;
    while (i < TAMANIO) {
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        i++;
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

}