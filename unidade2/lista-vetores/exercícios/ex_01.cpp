#include <iostream>

using namespace std;

int main() {
    const int TAM = 10;
    int vetor[TAM] = {2, 5, 2, 8, 5, 9, 8, 3, 3, 7}; // Exemplo de vetor com repetições
    int unicos[TAM]; // Vetor para armazenar apenas valores únicos
    int qtd_unicos = 0;

    // Percorre cada elemento do vetor original
    for (int i = 0; i < TAM; i++) {
        int contador = 0; // Conta quantas vezes vetor[i] já apareceu em unicos

        // Verifica se o elemento já está no vetor de únicos
        for (int j = 0; j < qtd_unicos; j++) {
            if (vetor[i] == unicos[j]) {
                contador++; // Incrementa se encontrar repetição
            }
        }
    return 0;
}
