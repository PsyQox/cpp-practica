#include <iostream>
using namespace std;

int main() {
    //mostrar numeros impares del 1 al 40
    for (int i = 1; i <= 40; i++)
    {
        if (i % 2 != 0)
        {
            cout << "EL numero es impar: " << i << endl;
        }
        
        
    }
    
    return 0;
}