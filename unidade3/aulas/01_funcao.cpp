/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 11 de junho de 2025, 08:13
 */

#include <cstdlib>
#include <iostream>

using namespace std;

// Declaração das funções utilizadas
void listaVetor(int v[], int tam);
void bubbleSort(int v[], int tam);

/*
 * Função principal do programa
 */
int main() {
    // Declaração e inicialização do vetor de inteiros
    int num[]={10, 3, 5, 6, 7, 1, 9, 2, 4, 8};
    int numCres[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numDec[]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    // Exibe o vetor antes da ordenação
    cout << "\nVetor antes da ordenação:" << endl;
    listaVetor(num, 10);
    listaVetor(numCres, 10);
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

// Função para listar (imprimir) os elementos do vetor
void listaVetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        // Imprime o índice (começando do 1) e o valor correspondente
        cout << i+1 << "º valor: " << v[i] << endl;
    }
    cout << endl;
}

// Função que implementa o algoritmo de ordenação bubble sort
void bubbleSort(int v[], int tam) {
    int i, j, aux;
    // Laço externo: controla o número de passagens pelo vetor
    for (i = tam - 1; i >= 1; i--){
        // Laço interno: percorre o vetor até a posição i
        for ( j = 0; j < i; j++){
            // Se o elemento atual é maior que o próximo, troca os dois
            if (v[j] > v[j+1]){
                aux = v[j];         // Guarda o valor de v[j] em aux
                v[j] = v[j+1];      // Atribui o valor de v[j+1] em v[j]
                v[j+1] = aux;       // Coloca o valor de aux em v[j+1]
            }
        }   
    }
}