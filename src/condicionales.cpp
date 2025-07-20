#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;

    if (numero > 0)
    {
        cout << "El numero es positivo: " << numero << endl;
    }
    else if (numero == 0)
    {
        cout << "El numero es intermediario: " << numero << endl;
    }
    else
    {
        cout << "El numero es negativo: " << numero << endl;
    }
    
}