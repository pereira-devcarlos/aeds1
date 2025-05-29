#include <iostream>

using namespace std;

// Exercício 1: Crie uma struct chamada Pessoa que contenha os campos nome (string) e idade (int).
// No programa principal, declare uma variável do tipo Pessoa, atribua valores a seus campos e imprima esses valores na tela.

// Declarando o struct Pessoa
struct Pessoa {
    string nome;
    int idade;
};

int main(){
    // Declarando uma variável do tipo Pessoa
    Pessoa person1;
    
    // Atribuindo valores aos campos nome e idade
    person1.nome = "Carlos";
    person1.idade = 20;

    // Imprimindo os valores na tela
    cout << "Dados da Pessoa:" << endl;
    cout << "Nome: " << person1.nome << endl;
    cout << "Idade: " << person1.idade << endl;

    return 0;
}