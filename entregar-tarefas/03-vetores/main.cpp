/* 
 * File: main.cpp
 * Author: 2024.2.08.001
 * Name:Carlos Eduardo Pereira dos Santos
 * Disciplina: AEDs I (Prática)
 * Criado em 19 de maio de 2025, 15:30
 * Local: Unifal Santa Clara
 * 
 * Objetivo: realizar operações nos valores armazenados em um vetor.
 * 
 * Descrição:
 * - Armazena valores inteiros em um vetor de 100 posições.
 * - Oferece um menu para realizar operações sobre o vetor, como contagem, busca, inserção e remoção.
 * - O usuário pode repetir as operações quantas vezes desejar.
 */

#include <iostream>
using namespace std;

// Define o tamanho máximo do vetor
const int TAM = 100;

int main() {
    int vetor[TAM];      // Vetor principal para armazenar os valores
    int qtd = 0;         // Quantidade atual de elementos no vetor (válidos)
    int opcao = -1;      // Opção do menu (inicia com valor diferente de zero)
    int valor, pos, inicio, fim;
    int encontrou;       // Indica se encontrou algo (0 = não, 1 = sim)

    // Inserção inicial dos valores no vetor
    cout << "==== Preenchimento do vetor ====" << endl;
    cout << "Quantos valores deseja inserir inicialmente? (máx " << TAM << "): ";
    cin >> qtd;
    if(qtd > TAM) qtd = TAM;
    for(int i = 0; i < qtd; i++) {
        cout << "Digite o valor da posição " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Menu de operações
    while(opcao != 0) {
        cout << "\n======= Menu de Operações =======" << endl;
        cout << "[1]-Contar ocorrências de um valor" << endl;
        cout << "[2]-Contar ocorrências de valores em um intervalo" << endl;
        cout << "[3]-Buscar primeira ocorrência de um valor" << endl;
        cout << "[4]-Excluir primeira ocorrência de um valor" << endl;
        cout << "[5]-Inserir valor em uma posição" << endl;
        cout << "[6]-Retirar todos os valores repetidos" << endl;
        cout << "[0]-Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                // Contar ocorrências de um valor e mostrar suas posições
                cout << "\nInforme o valor a ser contado: ";
                cin >> valor;
                {
                    int cont = 0;
                    int posicoes[TAM]; // Para armazenar as posições encontradas
                    for(int i = 0; i < qtd; i++) {
                        if(vetor[i] == valor) {
                            posicoes[cont] = i;
                            cont++;
                        }
                    }
                    if(cont == 0) {
                        cout << "O valor " << valor << " não foi encontrado no vetor." << endl;
                    } else {
                        cout << "\nForam encontradas " << cont << " ocorrências do valor " << valor << " nas:" << endl;
                        for(int i = 0; i < cont; i++) {
                            cout << "Posição " << (posicoes[i]+1) << " (valor: " << vetor[posicoes[i]] << ")" << endl;
                        }
                    }
                }
                break;
                
            case 2:
                // Contar ocorrências de valores em um intervalo e mostrar suas posições
                cout << "\nInforme o valor inicial do intervalo: ";
                cin >> inicio;
                cout << "Informe o valor final do intervalo: ";
                cin >> fim;
                {
                    int cont = 0;
                    int posicoes[TAM];
                    for(int i = 0; i < qtd; i++) {
                        if(vetor[i] >= inicio && vetor[i] <= fim) {
                            posicoes[cont] = i;
                            cont++;
                        }
                    }
                    if(cont == 0) {
                        cout << "Não existem valores no intervalo [" << inicio << ", " << fim << "]." << endl;
                    } else {
                        cout << "\nExistem " << cont << " valores no intervalo [" << inicio << ", " << fim << "] nas:" << endl;
                        for(int i = 0; i < cont; i++) {
                            cout << "Posição " << (posicoes[i]+1) << " (valor: " << vetor[posicoes[i]] << ")" << endl;
                        }
                    }
                }
                break;

            case 3:
                // Buscar primeira ocorrência de um valor
                cout << "\nInforme o valor a ser buscado: ";
                cin >> valor;
                encontrou = 0;
                for(int i = 0; i < qtd; i++) {
                    if(vetor[i] == valor) {
                        cout << "\nPrimeira ocorrência de " << valor << " está na posição " << (i + 1) << "." << endl;
                        encontrou = 1;
                        break;
                    }
                }
                if(encontrou == 0) {
                    cout << "\nValor não encontrado no vetor." << endl;
                }
                break;

            case 4:
                // Excluir primeira ocorrência de um valor
                cout << "\nInforme o valor a ser excluído: ";
                cin >> valor;
                encontrou = 0;
                for(int i = 0; i < qtd; i++) {
                    if(vetor[i] == valor) {
                        // Desloca os valores à direita para a esquerda
                        for(int j = i; j < qtd - 1; j++) {
                            vetor[j] = vetor[j + 1];
                        }
                        qtd--;
                        encontrou = 1;
                        cout << "\nValor excluído com sucesso." << endl;
                        break;
                    }
                }
                if(encontrou == 0) {
                    cout << "\nValor não encontrado no vetor." << endl;
                }
                break;

            case 5:
                // Inserir valor em uma posição
                if(qtd >= TAM) {
                    cout << "\nVetor cheio, não é possível inserir mais valores." << endl;
                    break;
                }
                cout << "\nInforme a posição para inserir (1 até " << (qtd+1) << "): ";
                cin >> pos;
                if(pos < 1 || pos > qtd + 1) {
                    cout << "\nPosição inválida!" << endl;
                    break;
                }
                cout << "\nInforme o valor a ser inserido: ";
                cin >> valor;
                // Desloca para direita para abrir espaço
                for(int i = qtd; i >= pos; i--) {
                    vetor[i] = vetor[i-1];
                }
                vetor[pos-1] = valor;
                qtd++;
                cout << "\nValor inserido com sucesso!" << endl;
                break;

            case 6:
                // Retirar todos os valores repetidos
            {
                    int removidos = 0;
                    for(int i = 0; i < qtd; i++) {
                        for(int j = i + 1; j < qtd; ) {
                            if(vetor[i] == vetor[j]) {
                                // Remove o valor repetido
                                for(int k = j; k < qtd - 1; k++) {
                                    vetor[k] = vetor[k+1];
                                }
                                qtd--;
                                removidos++;
                                // Não incrementa j, pois pode ter outro igual na mesma posição
                            } else {
                                j++;
                            }
                        }
                    }
                    if(removidos == 0) {
                        cout << "\nNenhum valor repetido encontrado." << endl;
                    } else {
                        cout << "\nForam removidos " << removidos << " valores repetidos." << endl;
                    }
                }
                break;
                
            case 0:
                cout << "\nSaindo do programa..." << endl;
                break;

            default:
                cout << "\nOpção inválida!" << endl;
        }

        // Exibe o vetor atualizado após cada operação
        if(opcao != 0) {
            cout << "\nVetor atual: ";
            for(int i = 0; i < qtd; i++) {
                cout << vetor[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}