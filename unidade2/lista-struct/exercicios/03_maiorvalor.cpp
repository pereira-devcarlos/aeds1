#include <iostream>

using namespace std;

//Exercício 3: Encontrando o maior valor em um array de structs 
//Usando a struct Produto do exercício anterior, leia os dados de 5 produtos. Depois, mostre qual produto tem o maior preço e exiba seu nome e valor.

struct Produto {
    string nome;
    float preco;
};

int main(){
    const int TAM = 5; // Definindo o tamanho do array
    Produto produto[TAM];

    // Declarando variáveis para armazenar o maior preço e o nome do produto com maior preço
    string maiorPnome;
    float maiorP=0.0;

    for (int i = 0; i < TAM; i++){
        // Atribuindo valores aos campos nome e preco
        cout << "Digite o nome do produto " << (i + 1) << ": ";
        cin >> produto[i].nome;
        cout << "Digite o preco do produto " << i+1 << ": ";
        cin >> produto[i].preco;
    }

    // Imprimindo os valores na tela
    cout << "\nProdutos cadastrados:" << endl;
    for (int i = 0; i < TAM; i++){
        cout << "Produto " << i+1 << ": " << endl;
        cout << "Nome: " << produto[i].nome << endl;
        cout << "Preco: " << produto[i].preco << endl;
        cout << "------------------------" << endl;
    }
    
    // Encontrando o produto com o maior preço
    for (int i = 0; i < TAM; i++){
        if (produto[i].preco > maiorP){
            maiorPnome = produto[i].nome;
            maiorP = produto[i].preco;
        }
    }

    // Exibindo o produto com o maior preço
    cout << "\nO produto com o maior preco e: " << endl;
    cout << "Nome: " << maiorPnome << endl;
    cout << "Preco: " << maiorP << endl;
    
    return 0;
}
