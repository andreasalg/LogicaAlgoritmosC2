#include <iostream>
#include "variables.h"
using namespace std;

/*
C - Create
R - Read
U - Update
D - Delete
*/

//Create
void addReg();
void addReg(){
    cout << "Datos del estudiante\n";
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif);
    cout << "Nombres: ";
    scanf(" %[^\n]", people[pos].name);
    cout << "Apellidos: ";
    scanf(" %[^\n]", people[pos].lastName);
    cout << "Anio:  ";
    scanf("%d", & people[pos].year);                                                                         
    pos++;
}

void showReg();
void showReg(){
    for(int i = 0; i < pos; i++){
        printf("\nNombre: %s %s \nAnio: %d"
        , people[i].name, people[i].lastName
        , people[i].year);
        cout << "\n------------------------------------\n";
    }
}

void menu();
void menu(){
    int op = 0;
    do{
        cout << "1. Agregar \n";
        cout << "2. Mostrar \n";
        cout << "3. Salir \n";
        cout << "Opcion: ";
        cin >> op;
        
        switch(op){
            case 1:
              addReg();
             system("pause");
              break;
            case 2:
             showReg();
             system("pause");
             break;
            case 3: 
             break;
              default:
             break;
        }
    }while(op != 3);
}