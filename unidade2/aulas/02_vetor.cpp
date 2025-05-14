/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 8 de maio de 2025, 10:53
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

// Constante para o tamanho dos arrays
const int TAM = 10; // Define o tamanho fixo dos vetores usados no programa

int main() {
    // Declaração das variáveis
    float alturas[TAM];
    float contador[TAM];
    float intervalo[2];
    int opcao=5;
    
    float media, user;
    int acima, iguais, inter;
    
    // Declaração de variavel auxiliar
    int i, j;

    // Definindo o arquivo como entrada de dados externos
    ifstream arquivo("alturas.txt");
    if(!arquivo.is_open()){
        cout << "Erro: arquivo não foi aberto corretamente";
        return 1;
    }
    // Leitura do vetor
    i=0;
    while(i<TAM){
        cout << "Digite o " << i+1 << "º valor: ";
        arquivo >> alturas[i];
        i++;
    }
    
    while(opcao != 0){
                // Exibir menu
        cout << "\n\tMenu de Opções" << endl;
        cout << "O que deseja fazer com os dados das alturas?" << endl;
        cout << "[1]-Exibir todas as alturas" << endl;
        cout << "[2]-Calcular a média das alturas e os valores acima" << endl;
        cout << "[3]-Buscar um valor e a quantidade que possui" << endl;
        cout << "[4]-Buscar valores em um determinado intervalo" << endl;
        cout << "[5]-Buscar a posição da primeira ocorrência de um valor" << endl;
        cout << "[6]-Buscar todas as posição de um determinado valor" << endl;
        cout << "[7]-Buscar as posições onde os valores se repete com a posição seguinte" << endl;
        cout << "[0]-Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;
        
        switch(opcao){
            case 1:
                cout << "\n" << endl;
                // Escrita do vetor
                i=0;
                while(i<TAM){
                    cout << "O " << i+1 << "º valor é: " << alturas[i] << endl;
                    i++;
                }
                break;
            case 3:
                //Usuário deseja saber quantas alturas tem igual a dele
                cout << "\nDigite o valor que deseja buscar: ";
                cin >> user;
                i=0;
                iguais=0;
                while(i<TAM){
                    if(user==alturas[i]){
                        iguais++;
                    }
                    i++;
                }
                cout << "\nFoi encontrado " << iguais << " alturas iguais a " << user << endl;
                break;
            case 4:
                // Buscar quntos valores estão em um intervalo
                cout << "\nIntervalo que deseja buscar" << endl;
                cout << "\nDigite o 1º valor do intervalo(menor valor): ";
                cin >> intervalo[0];
                cout << "\nDigite o 2º valor do intervalo(maior valor): ";
                cin >> intervalo[1];

                inter=0;
                i=0;
                j=0;
                while(i<TAM){
                    // Verifica se o valor está dentro do intervalo
                    if(alturas[i] > intervalo[0] && alturas[i] < intervalo[1]){
                        inter++;
                        contador[j]= alturas[i];
                        j++;
                    }
                    i++;
                }
                cout << "\nQuantidade de valores entre " << intervalo[0] << " e " << intervalo[1] << " são: " << inter << endl;
                // Exibir os valores entre esse intervalo
                i=0;
                while(i<inter){
                    cout << "A " << i+1 << "ª altura é: " << contador[i] << endl;
                    i++;
                }
                break;
            case 2:
                // Calcular a média das alturas
                i=0;
                media=0;
                while(i<TAM){
                    media+= alturas[i];
                    i++;
                }
                media = media / (i+1);
                cout << "\nO valor da média: " << media << endl;

                // Contar os valores acima da media
                i=0;
                j=0;
                acima=0;
                while(i<TAM){
                    if(alturas[i] > media){
                        acima++;

                        contador[j] = alturas[i];
                        j++;
                    }
                    i++;
                }

                cout << "\nA quantidade de alturas acima da média: " << acima << endl;

                i=0;
                while(i < acima){
                    cout << "A " << i+1 << "ª altura é: " << contador[i] << endl;
                    i++;
                }
                break;
            case 5:
                cout << "\nQual o valor você deseja buscar a posição: ";
                cin >> user;
                for(i=0; i<TAM; i++){
                    if(user == alturas[i]){
                        cout << "\nA primeira posição do valor " << user << " está na: " << i+1 << "ª" << endl;
                        i = TAM + 1;
                    }
                }
                break;
            case 6:
                cout << "Qual o valor você deseja buscar a posição: ";
                cin >> user;
                cout << "\nO valor de " << user << " estão na: " << endl;
                for(i=0, j=0; i<TAM; i++){
                    if(alturas[i] == user){
                        cout << "Posição: " << i+1 << endl;
                    }
                }
                break;
            case 7:
                cout << endl;
                for(i=0; i<TAM-1; i++){
                    if(alturas[i]== alturas[i+1]){
                        cout << "O valor " << alturas[i] << " está se repetindo na posição " << i+1 << " e " << i+2 << endl;
                    }
                }
                break;
            default:
                break;
        }
    }

    return 0;
}
