#include <stdio.h>

int maior (int *vetor, int n){
    int m = vetor[0];
    for (int i = 0; i < n; i++){
        if(vetor[i]>m){
            m = vetor[i];
        }
    }
    return m;
}

int main(){
    int v[8]={90, 3, 45, 6, 78, 19, 23, 9}, m;
    m = maior(v, 8);
    printf("Maior = %d\n", m);

    return 0;
}
