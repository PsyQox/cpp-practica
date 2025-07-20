#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //funcion para sacar el vo1lumen de una esfera
    double diametro, radio, volumen;
    const float pi = 3.1415;
    
    diametro = 10;
    radio = diametro / 2;
    
    volumen = (4.0/3.0) * pi * pow(radio, 3);

    cout << volumen << endl;

    return 0;
}