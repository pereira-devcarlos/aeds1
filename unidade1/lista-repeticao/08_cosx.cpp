/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 30 de abril de 2025, 09:48
 */

#include <iostream>  // Biblioteca para entrada e saída padrão

using namespace std;

int main() {
    // Declaração de variáveis
    int i, termo, den, fat, sinal;
    float x, num, coseno;

    // Entrada do valor de x em radianos
    cout << "Digite o valor de x(em radianos): ";
    cin >> x;

    // Entrada do número de termos da série de Taylor
    cout << "Digite o número de termos: ";
    cin >> termo;

    // Inicializações para a série de Taylor do cosseno:
    num = 1;        // Primeiro termo do numerador: x^0 = 1
    sinal = 1;      // O primeiro termo tem sinal positivo
    fat = 0;        // Fatorial inicial é 0!, pois o primeiro termo é x^0 / 0!
    den = 1;        // 0! = 1
    coseno = 1;     // Primeiro termo da série de Taylor do cosseno é 1
    i = 1;          // Inicia o laço a partir do segundo termo

    // Loop para calcular os próximos termos da série de Taylor
    while (i < termo) {
        fat += 2;                        // Avança para o próximo expoente/par: 2, 4, 6, ...
        den *= fat * (fat - 1);          // Atualiza o fatorial: den = (fat-2)! * (fat-1) * fat
        sinal = -sinal;                  // Alterna o sinal dos termos: +, -, +, ...
        num *= x * x;                    // Atualiza o numerador: multiplica por x^2 a cada passo
        coseno += (sinal * num) / den;   // Adiciona ou subtrai o termo ao valor de cosseno
        i++;                             // Incrementa o contador de termos
    }

    // Exibe o valor aproximado do cosseno de x
    cout << "O valor aproximado de coseno de x: " << coseno << endl;
    
    return 0;
}


