#include <iostream>

using namespace std;

//5. Filtrando structs com base em uma condição
//Usando a struct `Aluno`, leia os dados de 5 alunos. Em seguida, mostre apenas os alunos que tiveram nota maior ou igual a 7.

struct Aluno{ // Definindo a struct Aluno
    string nome;
    float nota;
};

int main(){
    const int TAM = 4;
    Aluno aluno[TAM]; // Declarando um array de Aluno
    int i; // Variável de controle para o loop

    int opcao = 0; // Variável para opcao do menu
    float soma = 0.0; // Variável para armazenar a soma das notas
    float media; // Variável para armazenar a média das notas

    // Lendo os dados dos alunos
    for (i = 0; i < TAM; i++){
        cout << "\nDigite o nome do aluno " << i+1 << ": ";
        cin >> aluno[i].nome;
        cout << "Digite a nota do aluno " << i+1 << ": ";
        cin >> aluno[i].nota; 
        soma += aluno[i].nota; // Somando as notas
    }

    // Exibir Menu
    while(opcao != 0){
        cout << "Menu de Opçoes:" << endl;
        cout << "[1]-Exibir dados dos alunos" << endl;
        cout << "[2]-Exibir a media das notas da turma" << endl;
        cout << "[3]-Exibir dados dos alunos aprovados" << endl;
        cout << "[4]-Exibir dados dos alunos reprovados" << endl;
    }

    cout << "\nDados dos alunos:" << endl;
    // Imprimindo os dados dos alunos
    for (i = 0; i < TAM; i++){
        cout << "Nome: " << aluno[i].nome << endl;
        cout << "Nota: " << aluno[i].nota << endl;
        cout << "------------------------" << endl;
    }
    
    media = soma / TAM; // Calculando a média
    // Exibindo a média das notas
    cout << "A media das notas da turma e: " << media << endl;
    cout << "------------------------" << endl;

    return 0;
}
