#include <iostream>

using namespace std;

int main(){
    // Declara três ponteiros para inteiros
    int *p, *q, *r;

    // Declara três matrizes 3x3
    int m3[3][3]; // Matriz que vai guardar o resultado da soma
    int m1[3][3] = { // Primeira matriz, já inicializada
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m2[3][3] = { // Segunda matriz, já inicializada
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int dim1 = 3, dim2 = 3; // Dimensões das matrizes

    // Usando ponteiros para percorrer as matrizes como se fossem vetores
    // p aponta para o primeiro elemento de m1
    // q aponta para o primeiro elemento de m2.........................................+9999999
    // r aponta para o primeiro elemento de m3
    // O loop vai até o último elemento (dim1*dim2 elementos)
    for (
        p = &m1[0][0], q = &m2[0][0], r = &m3[0][0]; // Ponteiros começam no início das matrizes
        p < &m1[0][0] + dim1 * dim2;                 // Enquanto p não passar do fim da matriz
        p++, q++, r++                                // Avança todos os ponteiros
    ){
        *r = *p + *q; // Soma o valor apontado por p e q, armazena no endereço apontado por r
    }

    // Exibe a matriz resultado da soma
    cout << "Matriz soma:" << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            cout << m3[i][j] << " "; // Imprime cada elemento da matriz soma
        }
        cout << endl; // Quebra de linha para cada linha da matriz
    }

    return 0;
}
