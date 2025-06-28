#ifndef MATRIZPONTEIRO_H
#define MATRIZPONTEIRO_H

const int TAM = 128;
typedef int Vetor[TAM][TAM];

void MultiplicarValores(Vetor matriz, int linhas, int colunas, int valor);
void TransporMatriz(Vetor matriz, int linhas, int colunas, Vetor transposta);
void InverterColunas(Vetor matriz, int linhas, int colunas);
void InverterLinhas(Vetor matriz, int linhas, int colunas);


#endif