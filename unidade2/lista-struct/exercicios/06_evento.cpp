#include <iostream>

using namespace std;

/*
6. Structs aninhadas (Desafio)
Crie uma struct chamada Data com os campos dia, mes e ano (todos int).
Depois, crie uma struct chamada Evento que contenha um nome (string) e uma data (do tipo Data).
No programa principal, leia os dados de 3 eventos e depois exiba todos eles mostrando nome, dia, mês e ano de cada evento.
*/

struct Data{
    int dia, mes, ano;
};
struct Evento {
    string nome;
    Data data;
};


int main(){
    const int TAM=3; // Definindo tamanho do array

    Evento event[TAM];

    // Leitura de dados
    for (int i = 0; i < TAM; i++){
        cout << "\nDigite o nome do evento " << i+1 << ": ";
        cin >> event[i].nome;
        cout << "Digite o dia do evento " << i+1 << ": ";
        cin >> event[i].data.dia;
        cout << "Digite o mes do evento " << i+1 << ": ";
        cin >> event[i].data.mes; 
        cout << "Digite o ano do evento " << i+1 << ": ";
        cin >> event[i].data.ano;
    }
    cout << endl;
    
    // Exibir os eventos registrados 
    for (int i = 0; i < TAM; i++){
        cout << "O evento " << event[i].nome << " ira acontecer dia " << event[i].data.dia << "/" << event[i].data.mes << "/" << event[i].data.ano << endl;        
    }

    return 0;
}
