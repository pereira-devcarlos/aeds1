/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 11 de junho de 2025, 08:13
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void listaVetor(int v[], int tam);

/*
 * 
 */
int main() {
    int num[]={10, 3, 5, 6, 7, 1, 9, 2, 4, 8};
    
    cout << "\nVetor antes da ordenação:" << endl;
    listaVetor(num, 10);
    
    cout << "\nVetor depois da ordenação" << endl;

    return 0;
}

void listaVetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout << i+1 << "º valor: " << v[i] << endl;
    }
}