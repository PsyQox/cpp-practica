#include <iostream>
using namespace std;

int main() {
    int numero;
    int acumulador;
    cout << "ingrese el numero que desea saber su factorial: " << endl;
    cin >> numero;

    acumulador = numero;
    for (int i = 1; i < numero; i++)
    {
        acumulador = acumulador * (numero - i);
    }
    cout << "El numero factorial es: " << acumulador << endl;
    return 0;
}

// 5! = 5 x 4 x 3 x 2 x 1 = 120
// n! = (n - 1) * (n - 2) 