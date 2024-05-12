/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja. */

#include <iostream>

using namespace std;

int main()
{
    int arreglo[5];
    int i = 0;
    while(i < 5){
        cout << "Ingrese un numero: ";
        cin >> arreglo[i];
        i++;
    }

    i = 0;
    while(i < 5){
        int j = 0;
        while(j < 4 - i){
            if(arreglo[j] > arreglo[j+1]){
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    i=0;
    while(i < 5){
        cout << arreglo[i] << " ";
        i++;
    }
    return 0;
}