#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "ingrese el numero para verificar si es par o impar" << endl;
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par: " << numero << endl;
    }else {
        cout << "El numero es impar: " << numero << endl;
    }
    
}