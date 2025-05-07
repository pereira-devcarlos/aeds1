/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 7 de maio de 2025, 09:13
 */

#include <iostream>  
#include <cmath>     // Funções matemáticas como exp() e abs()

using namespace std;

int main() {
    // Declaração de variáveis
    int x, y, xmax, ymax;       // Coordenadas x, y e os valores onde ocorre o máximo
    float f, expo, max;         // f é o valor da função, expo é o expoente da exponencial, max armazena o maior valor encontrado

    const float e = 2.71828;    // Valor de e (constante de Euler) — nesse código é desnecessário pois usamos exp()

    x = -5;         // Início do intervalo de x
    max = -999;     // Valor inicial do máximo (deve ser bem baixo)

    // Loop externo para x de -5 até 5
    while (x <= 5) {
        y = -5;     // Para cada x, y vai de -5 até 5

        // Loop interno para y
        while (y <= 5) {
            // Calcula o expoente: - (x² + y²)/10
            expo = - (x * x + y * y) / 10.0;

            // Calcula a função f(x, y) = 10 * e^expo - |x - y|
            f = 10 * exp(expo) - abs(x - y);

            // Atualiza o máximo se o valor atual de f for maior
            if (f > max) {
                max = f;
                // E deixa salvo os valores x e y
                xmax = x;
                ymax = y;
            }

            y++; // Próximo y
        }

        x++; // Próximo x
    }

    // Exibe o valor máximo encontrado e as coordenadas correspondentes
    cout << "O valor máximo de f(x,y)= " << max << endl;
    cout << "Valores de x e y que geraram esse máximo: x = " << xmax << " e y = " << ymax << endl;

    return 0;
}
