#include <iostream>
using namespace std;

//variables globales
int numero_global = 9;


//Clases de almacenamiento, local, global y estatico
// Controla la propiedades diferentes de una variable:
    // Duracion: Cuanto tiempo puede existir una variable
    // Alcance: determina que parte del programa puede acceder a ella.

// tres tipos de variables, variable local, variable global, variable local estatica

// variable local: es variable definida dentro de una funcion.
// variable global: definida fuera de todas las funciones.
// variable local estatica: solo existe dentro de una funcion donde se la declara, es similar a la variable local, solo que esta persiste hasta el final del programa.

// fucion prototipo
// void ejemplo();

// int main(){
//     int numero = 100; // variable local, que pertenece a main
//     cout << numero << endl;

//     ejemplo();

//     return 0;
// }

// void ejemplo(){
    
//     int numero_dos = 200; //variable local que pertenece a ejemplo
//     cout << numero_dos << endl;
//     cout << "Mi variable global es: " <<  numero_global << endl;
// }

void ejemplo();

int main(){
    ejemplo();
    ejemplo();
    return 0;
}

void ejemplo() {
    static int numero = 700; // persiste hasta el final del programa, osea si lo llamamos 2 veces, hara la suma al anterior resultado, en caso de no ser static, simplomente hara la suma sobre el resultado base que es 700
    numero++;
    cout << numero << endl;
}