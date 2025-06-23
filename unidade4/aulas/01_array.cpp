#include <iostream>

using namespace std;

int main(){
    int *p; //Declarando o ponteiro

    int vetor[10]; // Declarando e atribuindo valores ao array

    p=vetor; // Ponteiro recebendo o vetor da posição "0"
    *p= 3; // Alterando o valor do vetor
    
    cout << p << endl;  // Exibindo o endereço do vetor
    cout << *p << endl; // Exibindo o valor do vetor

    p++; // Passando o ponteiro para a posição seguinte
    *p= 5; // Alterando o valor do vetor

    cout << p << endl;  // Exibindo o endereço do vetor
    cout << *p << endl; // Exibindo o valor do vetor

    return 0;
}
