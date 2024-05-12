#include <iostream>

using namespace std;

int main()
{
    int num=0, suma=0;
    while(num>=0){
        cout << "Dime un #: ";
        cin >> num;
        suma+=num;
    }
    cout << "La suma es: " << suma << endl;
}