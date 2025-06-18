#include "ordenacao.h"

void bubbleSort(int* vetor, int tamanho) {
    int* fim = vetor + tamanho;
    int* ultimo = fim - 1;
    
    for (int* i = ultimo; i > vetor; --i) {
        for (int* j = vetor; j < i; ++j) {
            if (*j > *(j + 1)) {
                // Troca os elementos
                int aux = *j;
                *j = *(j + 1);
                *(j + 1) = aux;
            }
        }
    }
}

void insertionSort(int* vetor, int tamanho) {
    int* fim = vetor + tamanho;
    
    for (int* i = vetor + 1; i < fim; ++i) {
        int aux = *i;
        int* j = i - 1;
        
        while (j >= vetor && *j > aux) {
            *(j + 1) = *j;
            --j;
        }
        
        *(j + 1) = aux;
    }
}

void selectionSort(int* vetor, int tamanho) {
    int* fim = vetor + tamanho;
    
    for (int* i = vetor; i < fim; ++i) {
        int* min = i;
        int aux = *i;
        
        for (int* j = i + 1; j < fim; ++j) {
            if (*j < aux) {
                min = j;
                aux = *j;
            }
        }
        
        aux = *i;
        *i = *min;
        *min = aux;
    }
}