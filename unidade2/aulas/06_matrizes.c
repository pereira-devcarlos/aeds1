#include <stdio.h>

int main(){
    int A[5][5], B[5]; // Declara uma matriz 5x5 e um vetor de 5 posições

    // Preenche e exibe a matriz A e o vetor B
    for (int i = 0; i < 5; i++){
        printf("\nA= ");
        for (int j = 0; j < 5; j++){
            A[i][j] = i + j;      // Cada elemento de A recebe a soma dos índices
            printf("%d ", A[i][j]); // Exibe o valor de A[i][j]
        }
        B[i] = 3 * i;              // Cada elemento de B recebe o triplo do índice i
        printf("; B = %d ", B[i]); // Exibe o valor de B[i]
    }
    
    return 0;
}
