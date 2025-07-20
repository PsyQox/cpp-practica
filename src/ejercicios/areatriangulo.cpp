#include <iostream>
using namespace std;

int main () {
    double base, altura, resultado_calculo;
    cout << "Por favor intrese la base del triangulo: " << endl;
    cin >> base;
    cout << "Por favor ingrese la altura del triangulo: " << endl;
    cin >> altura;
    resultado_calculo = (base * altura)/2;
    cout << "El resultado es: " << resultado_calculo << endl;
    return 0;
}