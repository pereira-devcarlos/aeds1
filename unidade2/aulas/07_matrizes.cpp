#include <iostream>

using namespace std;

void somarMatrizes(int mat1[][3], int mat2[][3], int result[][3], int TAM){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < 3; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Função que retorna a soma de todos os elementos das duas matrizes
int somaTotalMatrizes(int mat1[][3], int mat2[][3], int TAM) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < 3; j++) {
            soma += mat1[i][j] + mat2[i][j];
        }
    }
    return soma;
}

int main(){
    const int TAM = 3;
    // Declarando as matrizes
    int mat1[TAM][TAM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mat2[TAM][TAM] = {
        {4, 7, 3},
        {6, 2, 9},
        {5, 12, 1}
    };
    int resultSoma[TAM][TAM];
    int resultMult[TAM][TAM];

    // Imprimir as matrizes
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Matriz 2:" << endl;
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    // Somar as 2 matrizes
    somarMatrizes(mat1, mat2, resultSoma, TAM);
    // Exibindo a matriz após a soma
    cout << "\nMatriz 1 + Matriz 2:" << endl;
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            cout << resultSoma[i][j] << " ";
        }
        cout << endl;
    }

    // Somar todos os elementos da matriz
    int soma = somaTotalMatrizes(mat1, mat2, TAM);
    // Exibir o total da soma dos elementos
    cout << "\nSoma total dos elementos das duas matrizes: " << soma << endl;

    // Multiplicação das matrizes
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            for (int k = 0; k < TAM; k++){
                resultMult[i][j] = mat1[j][k] * mat2[k][j];
            }
        }
    }


    return 0;
}
