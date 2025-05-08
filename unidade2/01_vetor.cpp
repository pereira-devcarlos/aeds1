/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 8 de maio de 2025, 10:53
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    // Declaração das variáveis
    float alturas[10];
    float contador[10];
    float intervalo[2];
    int opcao=0;
    
    float media, user;
    int acima, iguais, inter;
    
    // Declaração de variavel auxiliar
    int i, j;

    // Leitura do vetor
    i=0;
    while(i<10){
        cout << "Digite o " << i+1 << "º valor: ";
        cin >> alturas[i];
        i++;
    }
    
    while(opcao != 5){
        // Exibir menu
        cout << "\n\tMenu de Opções" << endl;
        cout << "O que deseja fazer com os dados das alturas?" << endl;
        cout << "1-Exibir todas as alturas" << endl;
        cout << "2-Buscar um valor e a quantidade que possui" << endl;
        cout << "3-Buscar valores em um determinado intervalo" << endl;
        cout << "4-Calcular a média das alturas e os valores acima" << endl;
        cout << "5-Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;
        
        if(opcao == 1){
            cout << "\n" << endl;
            // Escrita do vetor
            i=0;
            while(i<10){
                cout << "O " << i+1 << "º valor é: " << alturas[i] << endl;
                i++;
            }
        }
        else if(opcao == 2){
                //Usuário deseja saber quantas alturas tem igual a dele
            cout << "\nDigite o valor que deseja buscar: ";
            cin >> user;
            i=0;
            iguais=0;
            while(i<10){
                if(user==alturas[i]){
                    iguais++;
                }
                i++;
            }
            cout << "\nFoi encontrado " << iguais << " alturas iguais a " << user << endl;
        }
        else if(opcao == 3){
                // Buscar quntos valores estão em um intervalo
            cout << "\nIntervalo que deseja buscar" << endl;
            cout << "\nDigite o 1º valor do intervalo(menor valor): ";
            cin >> intervalo[0];
            cout << "\nDigite o 2º valor do intervalo(maior valor): ";
            cin >> intervalo[1];

            inter=0;
            i=0;
            j=0;
            while(i<10){
                // Condicional para o intervalo determinado
                if(alturas[i] > intervalo[0] && alturas[i] < intervalo[1]){
                    inter++;
                    contador[j]= alturas[i];
                    j++;
                }
                i++;
            }
            cout << "\nQuantidade de valores entre " << intervalo[0] << " e " << intervalo[1] << " são: " << inter << endl;
            // Mostrar os valores entre esse intervalo
            i=0;
            while(i<inter){
                cout << "A " << i+1 << "ª altura é: " << contador[i] << endl;
                i++;
            }
        }
        else if(opcao == 4){
                // Calcular a média das alturas
            i=0;
            media=0;
            while(i<10){
                media+= alturas[i];
                i++;
            }
            media = media / (i+1);
            cout << "\nO valor da média: " << media << endl;

            // Contar os valores acima da media
            i=0;
            j=0;
            acima=0;
            while(i<10){
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
        }
    } 
    
    return 0;
}
