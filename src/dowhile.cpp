#include <iostream>
using namespace std;

int main(){
    int numero, acumulador;
    numero = 10;
    acumulador = 1;
    do
    {
        /* code */
        acumulador ++;
        cout << "Hola " << acumulador << endl;
    } while (acumulador <= numero);
    
    return 0;
}