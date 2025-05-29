#include <iostream>  // E/S básica
#include <fstream>   // Leitura de dados externos
#include <vector>    // Armazenamento
#include <algorithm> // Ordenação
#include <ctime>     // Acesso ao horário
#include <stdlib.h>  // Aleatoriedade

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
    //Coletar os dados dos jogadores em arquivo externo
    ofstream arquivoE("jogadores.txt", ios::app); // ios::app para que não apague o que já estava escrito
    if(!arquivoP.is_open() || !arquivoE.is_open()){
        cout << "Erro: algum dos arquivos nao foi aberto corretamente!" << endl;
        return 1;
    }

    //Declarar os jogadores
    jogador player[10];
    
    //Declaração dos vetores
    string perguntas[TAM];
    string opcoes[TAM][4];
    string correta[TAM];
    string resposta[TAM];

    cout << "Digite seu nome: ";
    getline(cin, player[0].name);
    arquivoE << player[0].name << endl;

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
                // Agora as perguntas são exibidas na ordem do arquivo, sem sorteio
                cout << i+1 << "-" << perguntas[i] << endl;
                for (int j = 0; j < 4; j++){
                    cout << opcoes[i][j] << endl;
                }
                cout << "R: ";
                cin >> resposta[i];
                if(resposta[i]==correta[i]){
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
