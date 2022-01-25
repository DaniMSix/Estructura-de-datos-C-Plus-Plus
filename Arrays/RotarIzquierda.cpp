#include <iostream>
using namespace std;

int Rotar(int array[], tamanio){
    
}

int MostrarArray();

int main(){

    int num_elementos, elemento;

    cout<<"Ingrese el número de elementos\n";
    cin>>num_elementos;

    int array[num_elementos];

    for ( int i = 0; i<num_elementos; i++){
        cout<<"Ingrese el elemento\n";
        cin>>elemento;
        array[i] = elemento;
    }

    Rotar(array, num_elementos);
}