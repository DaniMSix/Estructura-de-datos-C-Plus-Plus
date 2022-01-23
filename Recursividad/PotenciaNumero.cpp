/*
Programa que calcula la potencia de un número recursivamente
*/

#include <iostream>
using namespace std;

int resultado = 1;

int potencia(int base, int exponente){

    
    
    // Caso base
    if (exponente == 0){
        
        cout<<"Llegue al caso base\n";
        cout<<resultado;
        return resultado;
    } else {
        resultado = resultado * base;
        potencia(base, exponente-1);
    }

}

int main(){

    // Declaramos las variables
    int base, exponente;

    cout<<"Ingrese la base\n";
    cin>>base;

    cout<<"Ingrese el exponente\n";
    cin>>exponente;
    
    // Mandamos a llamar la función recursiva
    cout<<base<<" elevado a la potencia "<<exponente<<" es igual a "<<potencia(base, exponente);
}