/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 11 de junho de 2025, 08:13
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void listaVetor(int v[], int tam);
void bubbleSort(int v[], int tam);

/*
 * 
 */
int main() {
    int num[]={10, 3, 5, 6, 7, 1, 9, 2, 4, 8};
    
    cout << "\nVetor antes da ordenação:" << endl;
    listaVetor(num, 10);
    
    cout << "\nVetor depois da ordenação" << endl;
    bubbleSort(num, 10);
    listaVetor(num, 10);
    cout << endl;

    return 0;
}

// Listagem do vetor
void listaVetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout << i+1 << "º valor: " << v[i] << endl;
    }
}

// Declaração do bubble sort
void bubbleSort(int v[], int tam) {
    int i, j, aux;
    for (i = tam - 1; i > 1; i--){
        for ( j = 0; j < i; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }   
    }
}