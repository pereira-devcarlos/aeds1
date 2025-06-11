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
    
    // Exibe o vetor antes da ordenação
    cout << "\nVetor antes da ordenação:" << endl;
    listaVetor(num, 10);
    
    // Ordena o vetor usando bubble sort
    cout << "\nVetor depois da ordenação" << endl;
    bubbleSort(num, 10);
    // Exibe o vetor já ordenado
    listaVetor(num, 10);
    cout << endl;

    return 0;
}

// Função para listar (imprimir) os elementos do vetor
void listaVetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        // Imprime o índice (começando do 1) e o valor correspondente
        cout << i+1 << "º valor: " << v[i] << endl;
    }
}

// Função que implementa o algoritmo de ordenação bubble sort
void bubbleSort(int v[], int tam) {
    int i, j, aux;
    // Laço externo: controla o número de passagens pelo vetor
    for (i = tam - 1; i > 1; i--){
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