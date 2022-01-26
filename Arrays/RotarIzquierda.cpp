#include <iostream>
using namespace std;

void MostrarArray(int array[], int tamanio){

    for (int i= 0; i<tamanio; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    
}

void Rotar(int array[], int tamanio){

    int i;

    int temp= array[0];

    for (i= 0; i<tamanio-1; i++){
        array[i] = array[i+1];
    }
    
    array[i] = temp;
}


int main(){

    int num_elementos, elemento;


    cout<<"Ingrese el número de elementos\n";
    cin>>num_elementos;

    //Declaramos el array
    int array[num_elementos];

    for ( int i = 0; i<num_elementos; i++){
        cout<<"Ingrese el elemento\n";
        cin>>elemento;
        array[i] = elemento;
    }

    cout<<"Antes de rotar el array\n";
    MostrarArray(array, num_elementos);
    cout<<"\n";

    Rotar(array, num_elementos);
    cout<<"Después de rotar el array\n";
    MostrarArray(array, num_elementos);

    return 0;
}