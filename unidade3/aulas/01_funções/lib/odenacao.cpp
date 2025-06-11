#include <iostream>

using namespace std;

void listaVetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout << i+1 << "º valor: " << v[i] << endl;
    }
    cout << endl;
}

void bubbleSort(int v[], int tam) {
    int i, j, aux;
    for (i = tam - 1; i >= 1; i--){
        for (j = 0; j < i; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}