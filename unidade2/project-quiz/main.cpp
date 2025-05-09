#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    const int TAM=5; // Constante para definir os tamanhos dos vetores
    
    

    //Valores Aleatórios
    srand(time(NULL));  //Gerar seed de acordo com as horas do meu pc
    //int random = rand() % 10; //Gerador de números inteiros aleatórios
    
    //Definindo a entrada das perguntas de um arquivo texto
    ifstream arquivoP("perguntas.txt");

    //Declaração dos vetores
    string perguntas[1] = "Qual e o comando para imprimir no console em C++?";
    string opcoes[TAM][4];
    
    cout << endl << perguntas[1] << endl;
    
    return 0;
}
