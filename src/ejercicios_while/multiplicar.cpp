#include <iostream>
using namespace std;

int main(){

    int tabla, acumulador = 1;
    
    cout << "Que tabla de multiplicar desea ver :" <<  endl;
    cin >> tabla;
    //Se puede quitar el 10 fijo y poner un limite por el usuario
    while (acumulador <= 10)
    {
        cout << "El valor de " << tabla << "x" << acumulador << " es igual a: " << tabla * acumulador << endl;
        acumulador++;
    }
    

    return 0;
}