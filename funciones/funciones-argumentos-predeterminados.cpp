#include <iostream>
using namespace std;

//los argumentos predeterminados se utilizan cuando no se proporcionana argumentos o solo unos pocos argumentos llaman a la funcion.
// Argumento y parametro son 2 cosas distintas
//El parametro va a definir la funcion con un nombre especifico pero cuando tenemos algo ya definido es un argumento
//parametro - para la definicion de la funcion
//suma(int numero)

//argumento - valores que se usan en una funcion
//suma(1000)

int suma(int a, int b = 20, int c = 10);

int suma(int a, int b, int c) {
    int resultado = a + b + c; 
    return resultado;
}


int main() {
    cout << suma(1,2) << endl;
}