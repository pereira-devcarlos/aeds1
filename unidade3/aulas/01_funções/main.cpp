/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 11 de junho de 2025, 08:13
 */

#include <cstdlib>
#include <iostream>
#include "../01_funções/lib/ordenacao.h"

using namespace std;

int main() {
    // Declaração e inicialização do vetor de inteiros
    int num[]={10, 3, 5, 6, 7, 1, 9, 2, 4, 8};
    int numCres[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numDec[]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    // Exibe os vetores antes das ordenações
    cout << "\nVetor antes da ordenação:" << endl;
    listaVetor(num, 10);

    cout << "\nVetor crescente antes da ordenação" << endl;
    listaVetor(numCres, 10);

    cout << "\nVetor decrescente antes da ordenação" << endl;
    listaVetor(numDec, 10);
    
    // Ordena o vetor usando bubble sort
    bubbleSort(num, 10);
    bubbleSort(numCres, 10);
    bubbleSort(numDec, 10);

    // Exibe os vetores já ordenados
    cout << "\nVetor depois da ordenação" << endl;
    listaVetor(num, 10);

    cout << "\nVetor crescente depois da ordenação" << endl;
    listaVetor(numCres, 10);

    cout << "\nVetor decrescente depois da ordenação" << endl;
    listaVetor(numDec, 10);
    return 0;
}