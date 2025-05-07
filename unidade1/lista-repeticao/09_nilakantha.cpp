#include <iostream>

using namespace std;

int main() {
    int termos, i = 1, sinal = 1;
    float pi = 3.0, soma = 0.0;
    int a = 2; // Primeiro número do denominador

    cout << "Digite o número de termos para a aproximação de PI: ";
    cin >> termos;

    while (i <= termos) {
        // Cada termo é: 4 / (a * (a+1) * (a+2))
        float termo = (4.0 / (a * (a + 1) * (a + 2))) * sinal;

        soma += termo;       // Soma o termo com o sinal correto
        sinal = -sinal;      // Alterna o sinal (+/-)
        a += 2;              // Avança para o próximo trio de números
        i++;
    }

    pi += soma; // Soma os termos alternados à base 3

    cout << "Valor aproximado de PI com " << termos << " termos: " << pi << endl;

    return 0;
}
