
/*
Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.
4Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    int digitos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int numero_nuevo = numero;
    while (numero_nuevo > 0){

        if (numero_nuevo % 10 != 0)
            digitos += 1,
            numero_nuevo = numero_nuevo / 10;

     else
            digitos += 1,
            numero_nuevo = numero_nuevo / 10;

    }

    cout << "El numero " << numero  << " tiene " << digitos << " digitos " << endl;

    return 0;
}
