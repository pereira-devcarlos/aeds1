#include <iostream>  // E/S básica
#include <fstream>   // Leitura de dados externos
#include <vector>    // Armazenamento
#include <algorithm> // Ordenação
#include <ctime>     // Acesso ao horário
#include <stdlib.h>  // Aleatoriedade
#include <string>

using namespace std;

struct jogador{
    string name;
    int pontos;
};


int main(){
    const int TAM=5; // Constante para definir os tamanhos dos vetores
    int menu;

    //Valores Aleatórios
    srand(time(NULL));  //Gerar seed de acordo com as horas do meu pc
    
    //Definindo a entrada das perguntas de um arquivo texto
    ifstream arquivoP("perguntas.txt");
    ifstream arquivoJ("jogadores.txt");
    //Coletar os dados dos jogadores em arquivo externo
    ofstream arquivoE("jogadores.txt", ios::app); // ios::app para que não apague o que já estava escrito
    if(!arquivoP.is_open() && !arquivoE.is_open() && !arquivoJ.is_open()){
        cout << "Erro: algum dos arquivos nao foi aberto corretamente!" << endl;
        return 1;
    }

    //Declarar os jogadores
    jogador player[10];

    player[0].pontos=0;
    
    //Declaração dos vetores
    string perguntas[TAM];
    string opcoes[TAM][4];
    string correta[TAM];
    string resposta[TAM];

    cout << "Digite seu nome: ";
    getline(cin, player[0].name);

    menu = 2; // Valor para iniciar a repetição
    while (menu != 3) {
        // Menu Inicial
        cout << "\n\tQuiz de Programacao" << endl;
        cout << "[1] Jogar" << endl << "[2] Ranking" << endl << "[3] Sair" << endl;
        cout << "Digite a opcao que voce deseja: ";
        cin >> menu;

        // Validar a escolha das opcoes
        while (menu < 1 || menu > 3) {
            cout << "\nErro: opcao invalida!!!" << endl;
            cout << "Digite a opcao que voce deseja: ";
            cin >> menu;
        }

        switch (menu) {
            case 1:
                // Coletando os dados
                for (int i = 0; i < TAM; i++) {
                    getline(arquivoP, perguntas[i]);     // Dados das perguntas
                    for (int j = 0; j < 4; j++) {
                        getline(arquivoP, opcoes[i][j]); // Dados das alternativas
                    }
                    getline(arquivoP, correta[i]);
                }

                // Verificando as perguntas e alternativas
                for (int i = 0; i < TAM; i++) {
                    cout << endl << i + 1 << "-" << perguntas[i] << endl;
                    for (int j = 0; j < 4; j++) {
                        cout << opcoes[i][j] << endl;
                    }
                    cout << "R: ";
                    cin >> resposta[i];
                    resposta[i][0] = toupper(resposta[i][0]);
                    if (resposta[i] == correta[i]) {
                        player[0].pontos+=10;
                    }
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << player[0].name << " obteve " << player[0].pontos << endl;
                arquivoE << player[0].name << endl;
                arquivoE << player[0].pontos << endl;
                break;

            case 2:
                // Leitura dos dados dos jogadores
                for (int i = 0; i < 5; i++){
                    getline(arquivoJ, player[i].name);
                    string pontoString;
                    getline(arquivoJ, pontoString);       // Lendo os pontos como string
                    player[i].pontos = stoi(pontoString); // converte string para int
                    cout << player[i].name << " tem " << player[i].pontos << endl;
                }

                // Ordenar o vetor para que fique do maior para o menor
                for (int i = 0; i < 4; i++){
                    for (int k=0 ,j=0; j < 4 - i -1 ; j++){
                        string temp;
                        if (player[j].pontos< player[j+1].pontos){
                            k = player[j].pontos;
                            temp = player[j].name;
                            player[j].pontos = player[j+1].pontos;
                            player[j].name = player[j+1].name;
                            player[j+1].pontos = k;
                            player[j+1].name = temp;                          
                        }
                    }
                }

                // Exibir Ranking
                cout << "\n     Ranking Quiz C++" << endl;
                cout << "==========================" << endl;
                for (int i = 0; i < 3; i++){
                    cout << "\t" << i+1 << " Lugar" << endl;
                    cout << "   " << player[i].name << " " << player[i].pontos << "pts" << endl;
                    cout << "==========================" << endl;
                }    

                cout << "\nDeseja continuar no jogo [1]-Sim ou [2]-Nao: ";
                cin >> menu;
                if (menu == 2) {
                    menu = 3;
                    cout << "\nObrigado por acessar meu jogo, volte sempre!!!" << endl;
                }
                break;

            case 3:
                cout << "\nVolte sempre, basta executar o jogo novamente!";
                break;
        }
    }

    return 0;
}
