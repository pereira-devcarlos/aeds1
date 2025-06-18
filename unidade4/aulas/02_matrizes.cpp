#include <iostream>

using namespace std;

int main(){
    int *p, *q, *r;
    int m3[3][3];
    int m1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int dim1 = 3, dim2 = 3;

    for (p=&m1[0][0], q=&m2[0][0], r=&m3[0][0]; p<&m1[0][0]+dim1*dim2; p++, q++, r++){
        *r = *p + *q;
    }

    // Exibir o resultado da soma
    cout << "Matriz soma:" << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
