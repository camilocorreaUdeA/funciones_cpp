// Ordenamiento burbuja (Bubble sort)
// Ordenar un arreglo de enteros de forma ascendente
// Comparar posiciones adyacentes y ordenar los elementos
// Hacer comparacion para todos los elementos del arreglo
// Realizar varias rondas de ordenamiento mientras que sea necesario

#include<iostream>
#include"bubble.h"
using namespace std;

int main(){

    int arreglo[] = {3,78,14,100,11,45,8,2,66,37};
    int N = 10;

    bubbleSort(arreglo, N);

    for(auto elem : arreglo){
        cout << elem << ",";
    }

    return 0;
}