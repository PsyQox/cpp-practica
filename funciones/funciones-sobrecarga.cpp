#include <iostream>
using namespace std;

//Sobrecarga de funciones es una caracteristica de C++ en la que dos o mas funciones pueden tener el mismo nombre pero diferentes parametros


//Funcion prototipo
    void fun(int);
    void fun(float);
//definir las funciones
    void fun(int a) { 
        cout << "El valor de la primera funcion " << a << endl; 
    }

    void fun(float b){
        cout << "El valor de la segunda funcion " << b << endl; 
    }

    int mul(int, int);
    float mul(float, int);

    int mul(int a, int b) {
        return a * b;
    }
    
    float mul(double x, int y) {
        return x * y;
    }

int main(){
    //El complidor no puede decidir que funcion debe invocarse entre las funciones sobrecargadas
    // fun(1);
    // fun(1.3); da errores
    //el error puede ser por tipo de conversion, funcion con argumentos predeterminados, funcion con paso por referencia

    int f1 = mul(3, 2);
    float f2 = mul(3.5, 9);

    cout << "F1 es: " << f1 << endl << "F2 es: " << f2 << endl;

    return 0;
}

//la ventaja es que aumenta la legibilidad del programa, porque no es necesario usar nombres diferentes para la misma accion.