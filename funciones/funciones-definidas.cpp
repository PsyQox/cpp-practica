#include <iostream>
using namespace std;

//funciones definidas por el programador
//tipo de retrono de la funcion/ nombre de la funcion/ parametros / cuerpo
void saludo(){
    cout << "Hola mundo";
}

void tipo_numeros(int n1, float n2){
    cout << "Tipo entero: " << n1 << endl;
    cout << "Tipo flotante: " << n2 << endl;
}

// int suma(int n1, int n2) {
//     return n1 + n2;
// }

// int main() { //funcion especial, estructura o cuerpo del programa
//     // saludo();
//     int num1 = 5;
//     float num2 = 10.5;
//     tipo_numeros(num1, num2);

//     int n1 = 30;
//     int n2 = 10;
//     int numero = suma(n1, n2);
//     cout << "La suma es: " << numero << endl;
//     return 0;
// }

//prototipo de una funcion: definir una funcion despues de llamar a una funcion, idea de funcion para plasmar una idea
//function prototipo
int suma(int, int); //no tiene cuerpo, finaliza en este punto

int main() {
    int s;
    s = suma(10, 12);
    cout << "La suma es: " << s << endl;
    return 0;
}

//definir funcion del prototipado, se debe de tener una ida de lo que debe ser
int suma(int n1, int n2) {
    return n1 + n2;
}

//En c++ es obligatorio usar prototipos
//El prototipo es la declaracion de una funcion
//Consiste en una presentacion de la funcion, exactamente con la misma estructura que la definicion pero sin cuerpo y terminada con un ;