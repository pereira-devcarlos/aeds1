#include <iostream>
#include "ordenacao.h" // Inclua o cabeçalho das funções

using namespace std;

int main() {
    int vetor[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    // Exemplo usando bubbleSort
    bubbleSort(vetor, tamanho);

    // Imprime o vetor ordenado
    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
