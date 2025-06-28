/*
* File: MatrizPonteiro.cpp
* Author: 2024.2.08.001
* Name:Carlos Eduardo Pereira dos Santos
* Disciplina: AEDs I (Prática)
* Criado em 26 de Junho de 2025, 18:30
* Local: Unifal Santa Clara
*/

#include "MatrizPonteiro.h"

// Multiplica todos os elementos da matriz por um valor
void multiplicar(Vetor* m, int valor) {
    int* p = &(*m)[0][0];
    int* fim = p + TAM * TAM;

    while (p < fim) {
        *p *= valor; // Multiplica o elemento atual por 'valor'
        p++;
    }
}

// Transpõe a matriz (sem usar índices)
void transposta(Vetor* m, Vetor* resultado) {
    int* pOrigem = &(*m)[0][0];

    int linha = 0;
    while (linha < TAM) {
        int coluna = 0;
        while (coluna < TAM) {
            // Calcula o endereço do elemento transposto
            int* pDestino = &(*resultado)[0][0] + coluna * TAM + linha;
            *pDestino = *(pOrigem + linha * TAM + coluna); // Copia o valor transposto
            coluna++;
        }
        linha++;
    }
}

// Inverte as colunas horizontalmente
void inverterColunas(Vetor* m) {
    int* linha = &(*m)[0][0];
    int linhaAtual = 0;

    while (linhaAtual < TAM) {
        int* esq = linha;           // Ponteiro para o início da linha
        int* dir = linha + TAM - 1; // Ponteiro para o final da linha

        while (esq < dir) {
            int tmp = *esq;
            *esq = *dir; // Troca os elementos das extremidades
            *dir = tmp;
            esq++;
            dir--;
        }

        linha += TAM;      // Vai para a próxima linha
        linhaAtual++;
    }
}

// Inverte as linhas verticalmente
void inverterLinhas(Vetor* m) {
    int* topo = &(*m)[0][0];                // Ponteiro para a primeira linha
    int* baixo = topo + (TAM - 1) * TAM;    // Ponteiro para a última linha

    int linhasProcessadas = 0;

    while (linhasProcessadas < TAM / 2) {
        int* pt = topo;   // Ponteiro para a linha do topo
        int* pb = baixo;  // Ponteiro para a linha do fundo
        int count = 0;

        while (count < TAM) {
            int temp = *pt;
            *pt = *pb;    // Troca os elementos das linhas
            *pb = temp;

            pt++;
            pb++;
            count++;
        }

        topo += TAM;      // Avança para a próxima linha de cima
        baixo -= TAM;     // Avança para a próxima linha de baixo
        linhasProcessadas++;
    }
}