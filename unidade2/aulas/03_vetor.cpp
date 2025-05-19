/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 8 de maio de 2025, 10:53
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

// Corrigir o case 6

using namespace std;

// Constante para o tamanho dos arrays
const int TAM = 10; // Define o tamanho fixo dos vetores usados no programa
int qtd = 10; // Definindo a quantidade válida do tamanho do vetor

int main() {
    // Declaração das variáveis
    int valores[TAM];          // Alterado de alturas para valores
    int contador[TAM];         // Alterado de alturas para valores
    int intervalo[2];
    int opcao = 5;

    int media, user, aux;
    int acima, iguais, inter;

    // Declaração de variavel auxiliar
    int i, j;

    // Definindo o arquivo como entrada de dados externos
    ifstream arquivo("valores.txt"); // Alterado de alturas.txt para valores.txt
    if (!arquivo.is_open()) {
        cout << "Erro: arquivo não foi aberto corretamente";
        return 1;
    }
    // Leitura do vetor
    for (i = 0; i < TAM; i++) {
        cout << "Digite o " << i + 1 << "º valor: ";
        arquivo >> valores[i];
    }

    while (opcao != 0) {
        // Exibir menu
        cout << "\n\tMenu de Opções" << endl;
        cout << "O que deseja fazer com os dados dos valores?" << endl;
        cout << "[1]-Exibir todos os valores" << endl;
        cout << "[2]-Calcular a média dos valores e os valores acima" << endl;
        cout << "[3]-Buscar um valor e a quantidade que possui" << endl;
        cout << "[4]-Buscar valores em um determinado intervalo" << endl;
        cout << "[5]-Buscar ou remover a posição da primeira ocorrência de um valor" << endl;
        cout << "[6]-Buscar todas as posições de um determinado valor" << endl;
        cout << "[7]-Buscar as posições onde os valores se repetem com a posição seguinte" << endl;
        cout << "[8]-Inverter os valores do vetor (1º c/o último, 2º c/o penúltimo,...)" << endl;
        cout << "[9]-Adicionar um valor para todos os elementos" << endl;
        cout << "[10]-Adicionar valores a todos elementos não divisíveis por 3" << endl;
        cout << "[0]-Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "\n" << endl;
                // Escrita do vetor
                for (i = 0; i < TAM; i++) {
                    cout << "O " << i + 1 << "º valor é: " << valores[i] << endl;
                }
                break;

            case 2:
                // Calcular a média dos valores
                media = 0;
                for (i = 0; i < TAM; i++) {
                    media += valores[i];
                }
                media = media / TAM;
                cout << "\nO valor da média: " << media << endl;

                // Contar os valores acima da media
                j = 0;
                acima = 0;
                for (i = 0; i < TAM; i++) {
                    if (valores[i] > media) {
                        acima++;
                        contador[j] = valores[i];
                        j++;
                    }
                }
                cout << "\nA quantidade de valores acima da média: " << acima << endl;

                for (i = 0; i < acima; i++) {
                    cout << "O " << i + 1 << "º valor acima da média é: " << contador[i] << endl;
                }
                break;

            case 3:
                // Usuário deseja saber quantos valores tem igual ao dele
                cout << "\nDigite o valor que deseja buscar: ";
                cin >> user;
                iguais = 0;
                for (i = 0; i < TAM; i++) {
                    if (user == valores[i]) {
                        iguais++;
                    }
                }
                cout << "\nFoi encontrado " << iguais << " valores iguais a " << user << endl;
                break;

            case 4:
                // Buscar quantos valores estão em um intervalo
                cout << "\nIntervalo que deseja buscar" << endl;
                cout << "\nDigite o 1º valor do intervalo (menor valor): ";
                cin >> intervalo[0];
                cout << "\nDigite o 2º valor do intervalo (maior valor): ";
                cin >> intervalo[1];

                inter = 0;
                j = 0;
                for (i = 0; i < TAM; i++) {
                    // Verifica se o valor está dentro do intervalo
                    if (valores[i] > intervalo[0] && valores[i] < intervalo[1]) {
                        inter++;
                        contador[j] = valores[i];
                        j++;
                    }
                }
                cout << "\nQuantidade de valores entre " << intervalo[0] << " e " << intervalo[1] << " são: " << inter << endl;
                // Exibir os valores entre esse intervalo
                for (i = 0; i < inter; i++) {
                    cout << "O " << i + 1 << "º valor no intervalo é: " << contador[i] << endl;
                }
                break;

            case 5:
                // Buscar primeira ocorrência de um valor
                cout << "\nQual o valor você deseja buscar a posição: ";
                cin >> user;
                for (i = 0; i < TAM; i++) {
                    if (user == valores[i]) {
                        cout << "\nA primeira posição do valor " << user << " está na: " << i + 1 << "ª" << endl;
                        cout << "Você deseja remover ela [1]Sim ou [2]Não: ";
                        cin >> j;
                        if (j == 1) {
                            qtd--;
                            for (int k = i; k < TAM - 1; k++) {
                                valores[k] = valores[k + 1];
                            }
                            cout << endl << "Resultado" << endl;
                            for (int k = 0; k < qtd; k++) {
                                cout << "O " << k + 1 << "º valor é: " << valores[k] << endl;
                            }
                        } else {
                            break; // Força a saída do loop após encontrar o primeiro
                        }
                    }
                }
                break;

            case 6:
                // Buscar todas as ocorrências de um valor
                cout << "Qual o valor você deseja buscar a posição: ";
                cin >> user;
                cout << "\nO valor de " << user << " está nas posições: " << endl;
                i = 0;
                while (i < qtd) {
                    if (valores[i] == user) {
                        cout << "Posição: " << i + 1 << endl;
                        cout << "Deseja remover ela [1]Sim ou [2]Não: ";
                        cin >> j;
                        if (j == 1) {
                            qtd--;
                            int k;
                            for (k = i; k < qtd; k++) {
                                valores[k] = valores[k + 1];
                            }
                            // Não incrementa i para verificar o novo valor na posição i
                            continue;
                        }
                    }
                    i++;
                }

                cout << endl << "Resultado" << endl;
                for (i = 0; i < qtd; i++) {
                    cout << "O " << i + 1 << "º valor é: " << valores[i] << endl;
                }
                break;

            case 7:
                // Buscar valores repetidos em posições consecutivas
                cout << endl;
                for (i = 0; i < qtd - 1; i++) { // qtd-1 para não ultrapassar o vetor válido
                    if (valores[i] == valores[i + 1]) {
                        cout << "O valor " << valores[i] << " está se repetindo na posição " << i + 1 << " e " << i + 2 << endl;
                    }
                }
                break;

            case 8:
                // Inverter os valores o 1° c/o último...
                cout << "\tInversão de valores" << endl;
                for (i = 0; i < (qtd / 2); i++) {
                    aux = valores[i];
                    valores[i] = valores[qtd - (i + 1)];
                    valores[qtd - (i + 1)] = aux;
                }
                // Exibir o resultado
                for (i = 0; i < qtd; i++) {
                    cout << "O " << i + 1 << "º valor é: " << valores[i] << endl;
                }
                break;

            case 9:
                // Recebendo o valor do usuário
                cout << "Digite o valor que será adicionado nos elementos: ";
                cin >> user;

                // Adicionando o valor do user nos elementos dos vetores
                cout << "\nElementos adicionados com " << user << endl;
                for (i = 0; i < qtd; i++) {
                    valores[i] += user;
                    cout << "O " << i + 1 << "º valor é: " << valores[i] << endl;
                }
                break;

            // Agora é possível utilizar o resto da divisão já que estamos usando int
            case 10:
                cout << "Digite o valor que será adicionado nos elementos não divisíveis por 3: ";
                cin >> user;

                cout << "\nElementos adicionados com " << user << endl;
                for (i = 0; i < qtd; i++) {
                    if (valores[i] % 3 != 0) { // Só adiciona se NÃO for divisível por 3
                        valores[i] += user;
                    }
                    cout << "O " << i + 1 << "º valor é: " << valores[i] << endl;
                }
                break;

            default:    // Se nenhum case for acionado, exibe está mensagem de erro
                cout << "Erro: opção inválida" << endl;
                break;
        }
    }

    return 0;
}
