/*
Programa que ordena los elementos de un array de forma descendente
*/

#include <iostream>
using namespace std;

void OrdenarElementos(int array[], int tamanio){
    // Bucle interno
    for (int i = 0; i < tamanio; i++) {
    // Bucle externo
    for (int j = i + 1; j < tamanio; j++) {
      
      if (array[i] < array[j]) {
        // Intercambio de elementos
        // Guarda el valor del índice j en temp
        int temp = array[j];
        // Guarda el valor del índice i en el índice j
        array[j] = array[i];
        // Store the value of temp at index i
        array[i] = temp;
      }
    }
  }

}


int main(){


    int tamanio, elemento;

    cout<<"Ingrese el número de elementos\n";
    cin>>tamanio;

    // Declaramos el array
    int array[tamanio];

    for (int i = 0; i<tamanio; i++){

        cout<<"Ingrese el elemento\n";
        cin>>elemento;
        array[i] = elemento;

    }

    OrdenarElementos(array, tamanio);


}