#include <iostream>
using namespace std;

int main() {
    //aquellos números naturales mayores que 1 que solo tienen "!!DOS!!" divisores: 1 y ellos mismos. Por ejemplo, 2, 3, 5, 7, 11, 13, etc.
    int numero;
    int contador = 0;
    //TENER UN CONTADOR PARA CONTAR QUE NO SE PASE MAS DE 2 DIVISIONES AL NUMERO QUE SE SABRA QUE ES PRIMO;
    cout << "Ingresa un numero para determinar si es primo o no" << endl;
    cin >> numero;

        for (int i = 1; i <= numero; i++)
        {  
            if (numero % i == 0)
            {
                contador++;
            }
            
        }

        if (contador == 2)
        {
            cout << "es primo" << endl;
        }else
        {
            cout << "no lo es" << endl;
        }

    return 0;
}