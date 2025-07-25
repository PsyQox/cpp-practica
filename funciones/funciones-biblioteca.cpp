#include <iostream> //bibliotecas
//<iostream> elemento que contiene prototipos de funciones para las funciones de entrada y salida estandar en c++
using namespace std;
//funciones de biblioteca estandar, ofrece un amplio conjunto de funciones para calculos matematicos comunes, manipulaciones de cadenas, caracteres entrada/salida, verificación de errores y muchas otras operaciones utiles apra realizar.
#include <cmath> //matematicas

int main(){
    double numero, raiz_cuadrada;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    raiz_cuadrada = sqrt(numero); //para sacar la raiz cuadrada
    cout << raiz_cuadrada << endl;
    return 0;
}