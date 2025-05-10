#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <limits>

using namespace std;

struct jogador{
    string name;
    int pontos;
    int rank;
};


int main(){
    const int TAM=5; // Constante para definir os tamanhos dos vetores
    int menu;

    //Valores Aleatórios
    srand(time(NULL));  //Gerar seed de acordo com as horas do meu pc
    
    //Definindo a entrada das perguntas de um arquivo texto
    ifstream arquivoP("perguntas.txt");
    if(!arquivoP.is_open()){
        cout << "Erro: arquivo nao foi aberto corretamente!"<< endl;
        return 1;
    }

    //Declarar os jogadores
    jogador player[10];
    
    //Declaração dos vetores
    string perguntas[TAM];
    string opcoes[TAM][4];
    string correta[TAM];
    string resposta[TAM];

    

    menu = 2; // Valor para iniciar a repetição
    while (menu!=3){
            // Menu Inicial
        cout << "\n\tQuiz de Programacao" << endl;
        cout << "[1] Jogar" << endl << "[2] Ranking" << endl << "[3] Sair" << endl;
        cout << "Digite a opcao que voce deseja: ";
        cin >> menu;

        // Validar a escolha das opcoes
        while (menu<1 || menu>3){
            cout << "\nErro: opcao invalida!!!" << endl;
            cout << "Digite a opcao que voce deseja: ";
            cin >> menu;
        }

        if (menu == 1){
            // Coletando os dados
            for (int i = 0; i < TAM; i++){
                getline(arquivoP, perguntas[i]);     // Dados das perguntas
                for (int j = 0; j < 4; j++){
                    getline(arquivoP, opcoes[i][j]); // Dados das alternativas
                }
                getline(arquivoP, correta[i]);
            }

            
            // Verificando as perguntas e alternativas
            cout << endl;
            for (int i = 0; i < TAM; i++){
                int random = rand() % TAM; // Gerar pergunta aleatória

                cout << i+1 << "-" << perguntas[random] << endl;
                for (int j = 0; j < 4; j++){
                    cout << opcoes[random][j] << endl;
                }
                cout << "R: ";
                cin >> resposta[random];
                if(resposta[random]==correta[random]){
                    cout << "\nParabens voce acertou!!!" << endl;
                }
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        else if (menu == 2){
            cout << "\nVoce esta em terceiro lugar no ranking!!!" << endl;
            cout << "\nDeseja continuar no jogo [1]-Sim ou [2]-Nao: ";
            cin >> menu;
            if(menu == 2){
                menu = 3;
                cout << "\nObrigado por acessar meu jogo, volte sempre!!!" << endl;
            }
        }
        else{
            cout << "\nVolte sempre, basta executar o jogo novamente!";
        }
    }

    return 0;
}
