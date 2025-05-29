#include <iostream>

using namespace std;

// Crie uma struct chamada Produto com os campos nome (string) e preco (float). No programa principal, crie um array de 3 produtos, leia os valores pelo teclado e depois mostre todos os produtos cadastrados na tela.

// Declarando o struct Pessoa
struct Produto {
    string nome;
    float preco;
};

int main(){
    // Declarando um array de 3 pessoas
    Produto produto[3];
    
    for (int i = 0; i < 3; i++){
        // Atribuindo valores aos campos nome e preco
        cout << "Digite o nome do produto " << (i + 1) << ": ";
        cin >> produto[i].nome;
        cout << "Digite o preco do produto " << i+1 << ": ";
        cin >> produto[i].preco;
    }
    // Imprimindo os valores na tela
    cout << "\nProdutos cadastrados:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Produto " << i+1 << ": " << endl;
        cout << "Nome: " << produto[i].nome << endl;
        cout << "Preco: " << produto[i].preco << endl;
        cout << "------------------------" << endl;
    }
    
    return 0;
}
