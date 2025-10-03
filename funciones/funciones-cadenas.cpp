#include <iostream>
#include <cstring> //trabajar las cadenas sin ningun inconveniente
using namespace std;

int main(){
    //Cadenas
    //Una cadena es una cadena de caracteres, pero en c++ tienen una caractareistica un poco especial, porque las cadenas en c++ asignan memoria de forma dinamica
    // string nombre = "psyqo"; 
    // Al momento de desarrollar un programa seria conveniente usar una cadena a partir de un array, 
    // cout << "Mi nombre es: " << nombre << endl;

    // para cumplir con la sentencia de asignar memoria de forma dinamica, debes hacerlo como indica el tipo de dato
    char nombre[18] = {'p','s','y','q','o','\0'};// <- esto es una cadena, 
    cout << "Mi nombre es: " << nombre << endl;

    //funciones de cadena
    //strcpy copia una cadena en otra cadena 
    char real_madrid[] = "cristiano ronaldo"; // si no quieres limitar el tamaño basta que lo representes como un array con []
    char juventus[20];//copiar la anterior cadena en este array en este punto si se necesita limitar la cadena 20, siempre y cuando cumpla con la cantidad de caracteres que tiene el array que quieres copiar

    strcpy(juventus, real_madrid) ;// 1param el destinop, 2 param la fuente 

    cout << real_madrid << endl;
    cout <<  juventus << endl;
    
    // strcat, concatena cadenas, osea las une

    char comida_uno[] = "papas";
    char comida_dos[] = " fritas";

    
    // strcat(comida_uno, comida_dos);

    cout << strcat(comida_uno, comida_dos) << endl; 
    // cout << comida_uno << endl;

    //strlen devuelve la longitud de la cadena que se le paso como argunmento

    cout << strlen(comida_dos) << endl;

    //strmp, se utiliza para comparar cadenas el mas dinamico de toda las funciones

    char colores[] = "naranja";  //A
    char pinturas[] = "azul"; //B

    cout <<  strcmp(colores, pinturas) << endl; //regreso 1, 1 = no son similares pero B es mayor que A, 0 = son similares, aunque hay una tercera respuesta negativa, -1 = no son similares y A es mayor que B

    /*
    Notaaa compara caracter por caracter pero en el orden ASCII

   strcmp devuelve:

        0 → si las cadenas son exactamente iguales.

        < 0 → si la primera cadena es menor que la segunda (en orden ASCII).

        > 0 → si la primera cadena es mayor que la segunda (en orden ASCII).
    */

    return 0;
}