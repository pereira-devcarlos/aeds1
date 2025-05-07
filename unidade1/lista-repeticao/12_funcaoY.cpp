/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 7 de maio de 2025, 08:18
 */

#include <iostream>  // Para entrada e saída

using namespace std;

int main() {
    // Declaração de variáveis
    int x, h, f, g, y;

    x = 1;     // Início da contagem para x (de 1 a 10)
    g = 0;     // g será recalculado dentro do loop

    cout << "Tabela Função y = f(x) + g(x) \n" << endl;

    // Loop de x = 1 até x = 10
    while(x <= 10) {
        // Função h(x) = x² - 16
        h = x * x - 16;

        // Condicional para função f(x)
        if (h >= 0) {
            f = h; // Se h ≥ 0, f(x) = h(x)

            if (f == 0) {
                // Se f(x) == 0, g(x) = x² + 16
                g = x * x + 16;
            } else {
                g = 0; // Caso contrário, g(x) = 0
            }

        } else {
            f = 1; // Se h < 0, f(x) = 1
        }

        // Calcula y = f(x) + g(x)
        y = f + g;

        // Exibe o resultado da iteração
        cout << "x= " << x << "; função y= " << f << " + " << g << " ; y= " << y << endl;

        // Próximo valor de x
        x++;
    }

    return 0;
}
