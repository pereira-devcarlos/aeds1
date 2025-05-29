#include <iostream>

using namespace std;

//5. Filtrando structs com base em uma condição
//Usando a struct `Aluno`, leia os dados de 5 alunos. Em seguida, mostre apenas os alunos que tiveram nota maior ou igual a 7.

struct Aluno{ // Definindo a struct Aluno
    string nome;
    float nota;
};

int main(){
    const int TAM = 5;
    Aluno aluno[TAM]; // Declarando um array de Aluno
    int i; // Variável de controle para o loop

    int opcao = -1; // Variável para opcao do menu
    float soma = 0.0; // Variável para armazenar a soma das notas
    float media; // Variável para armazenar a média das notas

    // Lendo os dados dos alunos
    for (i = 0; i < TAM; i++){
        cout << "\nDigite o nome do aluno " << i+1 << ": ";
        cin >> aluno[i].nome;
        cout << "Digite a nota do aluno " << i+1 << ": ";
        // Verificando se a nota do user é valida
        do{
            cin >> aluno[i].nota;
            // Condições para aceitar somente notas de 0 a 10 
            if(aluno[i].nota<0 || aluno[i].nota>10)
                cout << "\nErro: nota invalida." << "\nDigite a nota do aluno " << i+1 << " novamente: ";
        }while (aluno[i].nota>10 || aluno[i].nota < 0);
        soma += aluno[i].nota; // Somando as notas
    }
    media = soma / TAM; // Calculando a média
    
    // Exibir Menu
    while(opcao != 0){
        cout << "\nMenu de Opcoes:" << endl;
        cout << "[1]-Exibir dados dos alunos" << endl;
        cout << "[2]-Exibir a media das notas da turma" << endl;
        cout << "[3]-Exibir dados dos alunos aprovados" << endl;
        cout << "[4]-Exibir dados dos alunos reprovados" << endl;

        cout << "Digite uma das opcao acima: ";
        cin >> opcao;

        switch (opcao){
        case 0:
            //Sair do loop
            break;

        case 1:
            // Imprimir dados dos alunos
            cout << "\nDados dos alunos:" << endl;
            cout << "------------------------" << endl;
            for (i = 0; i < TAM; i++){
                cout << "Nome: " << aluno[i].nome << endl;
                cout << "Nota: " << aluno[i].nota << endl;
                cout << "------------------------" << endl;
            }
            break;
        case 2:
            // Exibindo a média das notas
            cout << "------------------------" << endl;            
            cout << "\nA media das notas da turma e: " << media << endl;
            cout << "------------------------" << endl;            
            break;
        case 3:
            // Exibe os alunos aprovados (nota >= 7)
            cout << "\nAlunos Aprovados:" << endl;
            for (int j=0 , i = 0; i < TAM; i++){
                if(aluno[i].nota>=7){
                    // Se o aluno foi aprovado, mostra nome e nota
                    cout << aluno[i].nome << " tirou nota " << aluno[i].nota << endl;
                }else{
                    // Conta quantos não foram aprovados
                    j++;
                    // Se nenhum aluno foi aprovado, exibe mensagem
                    if(j>=TAM)
                        cout << "Nessa turma nenhum aluno foi aprovado." << endl;
                }
            }
            break;
        case 4:
            // Exibe os alunos reprovados (nota < 7)
            cout << "\nAlunos Reprovados:" << endl;
            for (int j=0 , i = 0; i < TAM; i++){
                if(aluno[i].nota<7){
                    // Se o aluno foi reprovado, mostra nome e nota
                    cout << aluno[i].nome << " tirou nota " << aluno[i].nota << endl;
                }else{
                    // Conta quantos não foram reprovados
                    j++;
                    // Se nenhum aluno foi reprovado, exibe mensagem
                    if(j>=TAM)
                        cout << "Nessa turma nenhum aluno foi reprovado." << endl;
                }
            }            
            break;
        default:
            // Caso o usuário digite uma opção inválida
            cout << "Erro: opcao inexistente, porfavor escolha uma opcao valida!" << endl;
            break;
        }
    }

    return 0;
}
