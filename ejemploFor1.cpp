/*Mostrar las vocales*/
#include <iostream>

using namespace std;

char vocales [5]= {'a', 'e','i','o','u};

int main()
{
    imprimir();
    return 0;
}

void imprimir(){
    for(int i=0; i<5; i++){
        cout << vocales[i] << endl;
    }
}