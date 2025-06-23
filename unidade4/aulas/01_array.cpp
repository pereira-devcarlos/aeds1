#include <iostream>

using namespace std;

int main(){
    int *p; //Declarando o ponteiro

    int vetor[10]; // Declarando e atribuindo valores ao array
    vetor[0]= 5;
    vetor[1]= 2;

    p=vetor; // Ponteiro recebendo o vetor da posição "0"
    cout << p << endl;  // Exibindo o endereço do vetor
    cout << *p << endl; // Exibindo o valor do vetor

    p++; // Passando o ponteiro para a posição seguinte
    cout << p << endl;  // Exibindo o endereço do vetor
    cout << *p << endl; // Exibindo o valor do vetor

    return 0;
}
