#include "ordenacao.h"

// Função de ordenação Bubble Sort com ponteiros
void bubbleSort(int* vetor, int tamanho) {
    // Ponteiro para o último elemento do vetor
    int* fim = vetor + tamanho;
    // Ponteiro para o último elemento não ordenado (diminui a cada iteração)
    int* ultimo = fim - 1;
    
    // Loop que controla quantas passagens são feitas pelo vetor
    for (int* i = ultimo; i > vetor; --i) {
        // Loop que compara elementos adjacentes
        for (int* j = vetor; j < i; ++j) {
            // Compara o elemento atual com o próximo
            if (*j > *(j + 1)) {
                // Troca os elementos se estiverem fora de ordem
                int aux = *j;
                *j = *(j + 1);
                *(j + 1) = aux;
            }
        }
    }
}

// Função de ordenação Insertion Sort com ponteiros
void insertionSort(int* vetor, int tamanho) {
    // Ponteiro para o final do vetor
    int* fim = vetor + tamanho;
    
    // Começa do segundo elemento (vetor + 1)
    for (int* i = vetor + 1; i < fim; ++i) {
        // Guarda o valor atual que será inserido
        int aux = *i;
        // Ponteiro para o elemento anterior
        int* j = i - 1;
        
        // Move os elementos maiores que 'aux' uma posição para frente
        while (j >= vetor && *j > aux) {
            *(j + 1) = *j;
            --j;
        }
        
        // Insere 'aux' na posição correta
        *(j + 1) = aux;
    }
}

// Função de ordenação Selection Sort com ponteiros
void selectionSort(int* vetor, int tamanho) {
    // Ponteiro para o final do vetor
    int* fim = vetor + tamanho;
    
    // Percorre todo o vetor
    for (int* i = vetor; i < fim; ++i) {
        // Assume que o elemento atual é o menor
        int* min = i;
        int aux = *i;
        
        // Procura pelo menor elemento na parte não ordenada
        for (int* j = i + 1; j < fim; ++j) {
            if (*j < aux) {
                min = j;
                aux = *j;
            }
        }
        
        // Troca o elemento atual com o menor encontrado
        aux = *i;
        *i = *min;
        *min = aux;
    }
}