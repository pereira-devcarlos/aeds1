#include <iostream>

using namespace std;

void somarMatrizes(int mat1[][3], int mat2[][3], int result[][3]){
    
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
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

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

    return 0;
}
