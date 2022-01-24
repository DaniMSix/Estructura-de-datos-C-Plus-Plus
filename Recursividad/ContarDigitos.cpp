/* 
Programa que recibe un número por  consola y cuenta el número de dígitos que tiene a través de recursividad
*/

#include <iostream>
using namespace std;

// Nos va a contar el num. de digítos
int cont;

int contarDigitos(int num){

    if (num == 0){ // Caso base
        return cont;
    } else {
        cont += 1;
        contarDigitos(num/10);

    }
}

int main(){

    int num;

    cout<<"Ingrese el número\n";
    cin>>num;

    cout<<num<<" tiene "<<contarDigitos(num)<<" dígitos";
}