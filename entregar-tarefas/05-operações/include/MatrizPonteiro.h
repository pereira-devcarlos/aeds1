#ifndef MATRIZPONTEIRO_H
#define MATRIZPONTEIRO_H

const int TAM = 128;
typedef int Vetor[TAM][TAM];

// Multiplica todos os elementos da matriz por um valor
void multiplicar(Vetor* m, int valor);

// Calcula a matriz transposta e armazena no ponteiro 'resultado'
void transposta(Vetor* m, Vetor* resultado);

// Inverte as colunas da matriz (espelhamento horizontal)
void inverterColunas(Vetor* m);

// Inverte as linhas da matriz (espelhamento vertical)
void inverterLinhas(Vetor* m);

#endif