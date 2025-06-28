/*
* File: MatrizPonteiro.cpp
* Author: 2024.2.08.001
* Name:Carlos Eduardo Pereira dos Santos
* Disciplina: AEDs I (Prática)
* Criado em 26 de Junho de 2025, 18:30
* Local: Unifal Santa Clara
*/

#include <iostream>
#include "MatrizPonteiro.h"


//multiplica todos os valores de uma matriz por um valor usando ponteiros
void MultiplicarValores(Vetor matriz, int linhas, int colunas, int valor) {
    int *p = &matriz[0][0];
    for (int i = 0; i < linhas * colunas; i++, p++) {
        *p *= valor;
    }
}

//encontra a matriz transposta de uma matriz usando ponteiros
void TransporMatriz(Vetor matriz, int linhas, int colunas, Vetor transposta) {
    int *orig = &matriz[0][0];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            *(&transposta[0][0] + j * linhas + i) = *(orig + i * colunas + j);
        }
    }
}

//inverte as colunas de uma matriz usando ponteiros (sem usar índices diretamente)
void InverterColunas(Vetor matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        int *inico = &matriz[i][0];              // Ponteiro para o início da linha
        int *fim = &matriz[i][colunas - 1];      // Ponteiro para o final da linha
        for (int j = 0; j < colunas / 2; j++, inico++, fim--) {
            // Troca os elementos das extremidades, avançando e recuando os ponteiros
            int temp = *inico;
            *inico = *fim;
            *fim = temp;
        }
    }
}

//inverte as linhas de uma matriz usando ponteiros (sem usar índices diretamente)
void InverterLinhas(Vetor matriz, int linhas, int colunas) {
    for (int j = 0; j < colunas; j++) {
        int *inicio = &matriz[0][j];                 // Ponteiro para o inicio da coluna
        int *fim = &matriz[linhas - 1][j];           // Ponteiro para o fim da coluna
        for (int i = 0; i < linhas / 2; i++, inicio += colunas, fim -= colunas) {
            // Troca os elementos das extremidades, descendo e subindo os ponteiros
            int temp = *inicio;
            *inicio = *fim;
            *fim = temp;
        }
    }
}