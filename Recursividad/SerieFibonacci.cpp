/*
Programa que calcula el enésimo número de Fibonacci
*/

#include <iostream>
using namespace std;

int fibonacci(int num){
    // Caso base
    if (num == 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main(){
    int num;

    cout<<"Ingrese el número del término que desea ver\n";
    cin>>num;

    cout<<fibonacci(num);
}