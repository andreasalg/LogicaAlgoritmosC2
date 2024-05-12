/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande. */
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int mayor = 0;
    int arreglo[10];
    while (i < 10)
    {
        cout << "Ingrese un numero: ";
        cin >> arreglo[i];
        i++;
    }

    i = 0;
    while (i < 10)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
        i++;
    }

    cout << "El numero mas grande es: " << mayor << endl;

    return 0;
}