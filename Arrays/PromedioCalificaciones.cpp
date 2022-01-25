/* 
Programa que calcula media a partir de las calificaciones de un grupo de alumnos
*/

#include <iostream>
using namespace std;

int media(int calificaciones[], int tamanio){

    int promedio = 0;

    for ( int i = 0; i<tamanio; i++){
        // Guardamos las calificaiones en promedio para después obtener el mismo
        promedio += calificaciones[i];
    }
    return promedio/tamanio;
}

int main(){

    int num_alumnos, calif, promedio;

    cout<<"Ingrese el número de alumnos\n";
    cin>>num_alumnos;

    // Declaramos el array
    int calificaciones[num_alumnos]; 

    for (int i = 0; i<num_alumnos; i++){
        cout<<"Ingrese la calificación\n";
        cin>>calif;
        calificaciones[i] = calif;
    }

    promedio = media(calificaciones, num_alumnos);

    cout <<"La media del grupo de alumnos es: "<<promedio;
}