/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio.*/

#include <iostream>

using namespace std;

int main()
{
    int num, i = 0, suma = 0;
    float promedio;

    cout << "Ingrese la cantidad de calificaciones que desea promediar: \n";
    cin >> num;

    int notas[num];

    while (i < num)
    {
        cout << "Ingrese la calificacion " << i + 1 << ": " << endl;
        cin >> notas[i];

        suma += notas[i];
        i++;
    }

    promedio = (float)suma / num;

    cout << "El promedio de las calificaciones es: \n" << promedio;

}
