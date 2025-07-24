#include <iostream>
using namespace std;

int main() {
    int numero, acumulador;
    numero = -100;
    acumulador = 0;

    do
    {
        //divides el numero para saber la cantidad de digitos
        numero = numero/10;
        cout << numero << endl;
        acumulador++;
    } while (numero != 0);
    cout << "la cantidad de digitos es: " << acumulador << endl;
    return 0;
}