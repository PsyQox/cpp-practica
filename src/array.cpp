#include <iostream>
using namespace std;

int main(){
    //una matriz 
    //tipo de dato, nombre de array, tamaño del array;
    // int edad [5] = {19,20,44,56,24}; //5 elementos del array van entre {}
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << edad[i] << endl;
    // }

    int array[8];
    for (int i = 0; i < 8; i++)
    {
        cout << "posision: " << i << endl;
        cin >> array[i];
    }
    
    char texto[] = {'a', 'b', 'c', '\0'}; //elimina el 0 en la impresion, ya que por defecto deja un 0 al final del array, cuando se usa char
    cout << texto;
    // cin.getline(texto, 20) //puedes guardar con espacios
    return 0;
}

//tanto int como char aplica la misma teoria de declaracion de array con o sin numero definido de espacios