#include <iostream>

using namespace std;

//Exercício 4: Calculando a média das notas

//Crie uma struct chamada Aluno com os campos nome (string) e nota (float). No programa principal, crie um array para armazenar 4 alunos, leia os dados pelo teclado e depois calcule e exiba a média das notas da turma.

struct Aluno{ // Definindo a struct Aluno
    string nome;
    float nota;
};

int main(){
    const int TAM = 4;
    Aluno aluno[TAM]; // Declarando um array de Aluno
    int i; // Variável de controle para o loop
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
