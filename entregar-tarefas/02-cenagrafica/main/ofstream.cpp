/* 
 * Arquivo:   main.cpp
 * Autor: 2024.2.08.001
 * Name:Carlos Eduardo Pereira dos Santos
 * Disciplina: AEDs I (Prática)
 * Criado em 25 de abril de 2025, 10:00
 * Local: Unifal Santa Clara
 
    Objetivo:
 - Gerar a descrição de uma cena gráfica com todas as figuras geométricas e medidas que o usuário desejar.
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Declarando as varáveis
    int figura, opcao;
    float raio, altura, aresta;
    opcao = 2;

    // Criação e abertura do arquivo onde as figuras serão registradas
    ofstream arquivoS("cenagrafica.txt");

    // Menu com as opções de figuras geométricas
    cout << "\tFiguras Geométricas" << endl;
    cout << "\n1-Quadrado     2-Cubo          3-Circulo" << endl;
    cout << "\n4-Esfera       5-Cilindro      6-Triângulo" << endl;
    cout << "\n7-Pirâmide     8-Retângulo     9-Paralelepipedo" << endl;
    cout << "\nCaso não desejar nenhuma das figuras acimas digite(0)" << endl;
    cout << "Escolha uma das opções acima: ";
    cin >> figura;
    
    // Loop para continuar enquanto o usuário quiser adicionar figuras
    while (figura != 0) {
        
        // Validação de entrada: só aceita opções de 1 a 9
        while (figura < 0 || figura > 9) {
            cout << "Opção Inválida, por gentileza digite novamente." << endl;
            cout << "Escolha uma das opções acima: ";
            cin >> figura;
        }

        // Condicionais para tratar cada figura escolhida
        if (figura == 1) { //Quadrado
            cout << "\nVocê escolheu o Quadrado" << endl;
            cout << "Digite a aresta do seu quadrado: ";
            cin >> aresta;
            arquivoS << "quadrado " << aresta << endl;
        } 
        else if (figura == 2) { //Cubo
            cout << "\nVocê escolheu o Cubo" << endl;
            cout << "Digite a aresta do seu cubo: ";
            cin >> aresta;
            arquivoS << "cubo " << aresta << endl;
        }
        else if (figura == 3) { //Circulo
            cout << "\nVocê escolheu o Circulo" << endl;
            cout << "Digite o raio do seu circulo: ";
            cin >> raio;
            arquivoS << "circulo " << raio << endl;
        }
        else if (figura == 4) { //Esfera
            cout << "\nVocê escolheu a Esfera" << endl;
            cout << "Digite o raio da sua esfera: ";
            cin >> raio;
            arquivoS << "esfera " << raio << endl;
        }
        else if (figura == 5) { //Cilindro
            cout << "\nVocê escolheu o Cilindro" << endl;
            cout << "Digite o raio do seu cilindro: ";
            cin >> raio;
            cout << "Digite a altura do seu cilindro: ";
            cin >> altura;
            arquivoS << "cilindro " << raio << " " << altura << endl;
        }
        else if (figura == 6) { //Triângulo
            cout << "\nVocê escolheu o Triângulo" << endl;
            cout << "Digite a 1ª aresta do seu triângulo: ";
            cin >> raio;
            cout << "Digite a 2ª aresta do seu triângulo: ";
            cin >> altura;
            cout << "Digite a 3ª aresta do seu triângulo: ";
            cin >> aresta;
            arquivoS << "triangulo " << raio << " " << altura << " " << aresta << endl;
        }
        else if (figura == 7) { //Pirâmide
            cout << "\nVocê escolheu a Pirâmide" << endl;
            cout << "Digite a aresta da base de sua piramide: ";
            cin >> aresta;
            cout << "Digite a altura de sua pirâmide: ";
            cin >> altura;
            arquivoS << "piramide " << aresta << " " << altura << endl;
        }
        else if (figura == 8) { //Retângulo
            cout << "\nVocê escolheu o Retângulo" << endl;
            cout << "Digite a base do seu retângulo: ";
            cin >> aresta;
            cout << "Digite a altura do seu retângulo: ";
            cin >> altura;
            arquivoS << "retangulo " << aresta << " " << altura << endl;
        }
        else if (figura == 9) { //Paralelepípedo
            cout << "\nVocê escolheu o Paralelepípedo" << endl;
            cout << "Digite o comprimento do seu paralelepipedo: ";
            cin >> raio;
            cout << "Digite a largura do seu paralelepipedo: ";
            cin >> aresta;
            cout << "Digite a altura do seu paralelepipedo: ";
            cin >> altura;
            arquivoS << "paralelepipedo " << raio << " " << aresta << " " << altura << endl;
        }
        
        // Pergunta se o usuário deseja adicionar outra figura
        cout << "\nDeseja adicionar outra figura Sim(1) ou Não(0): ";
        cin >> opcao;
        
        if(opcao == 0){
            break; //Se a resposta for não ele sai do loop principal
        }
        else {
            //Se a resposta for sim ele mostra o menu novamente
            cout << "\n\n\tFiguras Geométricas" << endl;
            cout << "\n1-Quadrado     2-Cubo          3-Circulo" << endl;
            cout << "\n4-Esfera       5-Cilindro      6-Triângulo" << endl;
            cout << "\n7-Pirâmide     8-Retângulo     9-Paralelepipedo" << endl;
            cout << "\nCaso não desejar nenhuma das figuras acimas digite(0)" << endl;
            cout << "Escolha uma das opções acima: ";
            cin >> figura;
        }
    }

    // Mensagem final de agradecimento
    if(figura == 0 && opcao ==1){
        cout << "\nObrigado pelas informações" << endl;
    }
    else if(figura == 0){
        cout << "\nOkay, se mudar de ideia é só executar o programa novamente!" << endl;
    }
    else {
        cout << "\nObrigado pelas informações" << endl;
    }
    
    // Finaliza o arquivo indicando fim
    arquivoS << "fim";
    
    return 0;
}

