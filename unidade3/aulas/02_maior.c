#include <stdio.h>

// Função que retorna o maior valor de um vetor de inteiros
int maior (int *vetor, int n){
    int m = vetor[0]; // Inicializa 'm' com o primeiro elemento do vetor
    for (int i = 0; i < n; i++){
        if(vetor[i]>m){ // Se encontrar um valor maior que 'm'
            m = vetor[i]; // Atualiza 'm' com esse valor
        }
    }
    return m; // Retorna o maior valor encontrado
}

int main(){
    // Declara e inicializa um vetor de 8 inteiros
    int v[8]={90, 3, 45, 6, 78, 19, 23, 9}, m;
    // Chama a função 'maior' para encontrar o maior valor do vetor
    m = maior(v, 8);
    // Exibe o maior valor encontrado
    printf("Maior = %d\n", m);

    return 0;
}
