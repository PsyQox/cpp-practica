#include <iostream>
using namespace std;

int main() {
    int hora, minutos;
    float precio = 3.50, total;
    hora = 1;
    minutos = 2;
    if (minutos > 0)
    {
        hora++;
    }
    total = hora * precio;
    cout << "Su total a pagar es: " << total << endl;
}