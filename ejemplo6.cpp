/*Leer un numero y dar la tabla de multiplicar de dicho numero*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int i = 1;
    cout << "Dime un numero: " << endl;
    cin >> num;

    while(i <= 12){
        int resultado = i*num;
        cout << num << "*" << i << "=" << resultado << endl;
        i++;
    }
}