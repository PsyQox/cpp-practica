#include <iostream>
using namespace std;

int main () {

    char operador;
    int num1, num2;

    cout << "Ingrese un operador: \n + - * /" << endl;
    cin >> operador;

    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;

    // la expresion de la contruccion switch debe ser de tipo entero o caracter;

    switch (operador)
    {
    case '+': //Como es de tipo caracter va con comillas simples
        /* code */
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    
    default:
        break;
    }

    return 0;
}