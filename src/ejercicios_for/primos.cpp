#include <iostream>
using namespace std;

int main() {
    //aquellos números naturales mayores que 1 que solo tienen "!!DOS!!" divisores: 1 y ellos mismos. Por ejemplo, 2, 3, 5, 7, 11, 13, etc.
    int numero = 4;
    //TENER UN CONTADOR PARA CONTAR QUE NO SE PASE MAS DE 2 DIVISIONES AL NUMERO QUE SE SABRA QUE ES PRIMO;
   
        if ((numero % 1 == 0) && (numero % numero == 0))
        {
            cout << "es primo" << endl;
        }else
        {
            cout << "no lo es" << endl;
        }
        
    
    return 0;
}