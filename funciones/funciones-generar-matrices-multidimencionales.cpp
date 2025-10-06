#include <iostream>
using namespace std;

int main(){
    // Matrices Multidimencionales
    // Array de manera avanzada - array - arreglo - cadena - matriz unidimencional
    // matris bidimencional - 2 dimenciones - la forma mas simple de una matriz multidimencional
    // int a [][]  
    // [ a[0][0] ] [ a[0][1] ] [ a[0][2] ]
    // [ a[1][0] ] [ a[1][1] ] [ a[1][2] ]
    // [ a[2][0] ] [ a[2][1] ] [ a[2][2] ]

    // matris de 3x3 como en la parte de arriba
    // Las primeras llaves despues del igual, engloban el total de la matriz, internamente hay mas llaves
    // en las segundas llaves se insertan los valores de las filas y columnas, {{1 <-valor de la clumna 0}<-fila}
    int a [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << a[0][1] << endl;

    //Algo adicional para hacer con la matriz es ver las posiciones

    for (int i = 0; i < 3; i++)
    {
        // cout << "Posicion numbero " << i << " Valor: " << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Datos de la Matriz A[" << i << "][" << j << "] = " << a[i][j] << endl;
        }
    }

    // matris multidimencional - 3 dimenciones
    // int a [][][]

    


    return 0;
}