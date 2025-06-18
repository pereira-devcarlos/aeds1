#include <iostream>

using namespace std;

void somarMatrizes(int mat1[][3], int mat2[][3], int result[][3], int TAM){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < 3; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
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
    for (size_t i = 0; i < TAM; i++){
        for (size_t j = 0; j < TAM; j++){
            cout << resultSoma[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
