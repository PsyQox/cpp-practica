#include <iostream>
using namespace std;

int main() {
    // int a = 8, b = 2, suma; //cuando se repite el mismo tipo de dato se puede hacer asi
    
    // suma = a + b;
    
    // cout << "El resultado es: " << suma << endl;
    
    // //incremento
    // int a = 10;
    // int resultado_a; //cambia en circustancias de a
    // //incrementar la variable a

    // resultado_a = ++a;

    // cout << "La variable es : " << resultado_a;

    //operadores de asignacion

    // int a, b, edad;
    // a = 9;
    // b = 2;
    // a += b; // simplifica a a = a + b
    
    //datos de entrada y salida
    
    int n1, n2, suma;

    cout << "Ingrese un numero: " << endl;
    cin >> n1; // para tomar datos de entrada
    cout << "Ingrese otro numero: " << endl;
    cin >> n2;
    suma = n1 + n2;
    cout << "El resultado es: " << suma << endl;

    return 0;
}