/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 30 de abril de 2025, 09:05
 */

#include <iostream>  // Biblioteca para entrada e saída de dados

using namespace std; 

int main() {
    // Declaração de variáveis
    int i, termo, den, fat, sinal;
    float x, num, seno;

    // Solicita ao usuário o valor de x em radianos
    cout << "Digite o valor de x(em radianos): ";
    cin >> x;

    // Solicita ao usuário o número de termos para a aproximação
    cout << "Digite o número de termos: ";
    cin >> termo;

    // Inicializações:
    num = x;      // Primeiro termo do numerador é x
    sinal = 1;    // O primeiro termo tem sinal positivo
    fat = 1;      // Fator para cálculo do fatorial (usado para controle do denominador)
    den = 1;      // Denominador começa com 1 (1! = 1)
    seno = x;     // O primeiro termo da série de Taylor é x
    i = 1;        // Inicia o contador do laço

    // Loop para calcular os termos seguintes da série de Taylor para o seno
    while (i < termo) {
        fat += 2;                        // Próximo expoente ímpar (3, 5, 7, ...)
        den *= fat * (fat - 1);          // Calcula o novo fatorial: fat! = (fat-1)! * fat
        sinal = -sinal;                  // Alterna o sinal (+, -, +, ...)
        num *= x * x;                    // Calcula o novo numerador: x^(2i+1)
        seno += (sinal * num) / den;     // Adiciona ou subtrai o termo à soma do seno
        i++;                             // Incrementa o número de termos usados
    }

    // Exibe o resultado aproximado do seno de x
    cout << "O valor aproximado de seno de x: " << seno << endl;

    return 0;
}


