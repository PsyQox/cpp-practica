#include <iostream>
using namespace std;

//recursion: proceso en el que una funcion se llama asi misma se conoce como recurcividad y la funcion correspondiente se llama funcion recursiva
// factorial
// !n = 
// 0! = 1
// 1! = 1
// 2! = 2 * 1 = 2
// 3! = 3 * 2 * 1 = 6
// VENTAJAS
// hace que el codigo sea mas corto y mas limpio
// es necesarioa en problemas relacionados con estructura de datos y algoritmos avanzados
// DESVENTAJAS
// se necesita mucho espacio de pila, utiliza mas tiempo el procesador, puede ser mas dificil de depurar en comparacion de un programa iterativo equivalente

int factorial(int n);

int main() {
    int n, resultado;
    cout << "ingrese un numero: " << endl;
    cin >> n;

    resultado = factorial(n);

    cout << "El factorial de: " << n << " es " << resultado << endl;

    return 0;
}


int factorial(int n){
    if (n > 1)
    {
        return n * factorial(n - 1); // todo se resuelve al final
    } else {
        return 1;
    }
    
}