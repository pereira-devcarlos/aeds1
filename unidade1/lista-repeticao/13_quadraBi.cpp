/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 7 de maio de 2025, 08:41
 */

#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    int x, y, f, max, xmax, ymax;

    x = -10;          // Início do intervalo de x
    max = -1000;      // Valor inicial para o máximo (deve ser bem baixo para garantir que qualquer f válido substitua)

    // Loop externo para percorrer valores de x de -10 até 10
    while (x <= 10) {
        y = -10;  // Para cada x, reinicia y de -10 até 10

        // Loop interno para percorrer valores de y de -10 até 10
        while (y <= 10) {
            // Calcula o valor da função f(x, y)
            // f(x, y) = 3x² + 2y² - 4xy + 7
            f = 3 * (x * x) + 2 * (y * y) - 4 * x * y + 7;

            // Verifica se este valor é o maior encontrado até agora
            if (f > max) {
                max = f;     // Atualiza o máximo
                xmax = x;    // Salva o valor de x que gerou o máximo
                ymax = y;    // Salva o valor de y que gerou o máximo
            }

            y++; // Próximo valor de y
        }

        x++; // Próximo valor de x
    }

    // Exibe os resultados finais
    cout << "O valor máximo de f(x,y)= " << max << endl;
    cout << "Valores de x e y que geraram esse máximo: x = " << xmax << " e y = " << ymax << endl;

    return 0;
}
