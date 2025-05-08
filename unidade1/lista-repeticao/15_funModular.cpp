/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 8 de maio de 2025, 10:05
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declarando as variáveis
    int f, x, y, xmax, ymax, max, rep;
    
    // Inicializando os valores das variáveis
    x=-8; 
    max= -1000;
    rep = 0;
    
    // Repetição para calcular todas as conbinações de x
    while(x<8){
        y=-5; //Valor inicial de y
        
        while(y<5){     // Repetição para calcular todas as conbinações de y
            f = abs(x+y) + x * x - y; //Cálculo da função de x e y
            
            if(f==max){     //Condição pra obter a quantidade de vezes que o valor max aparece
                rep++;
            }
            
            if(f>max){      //Condicional para obter o valor máximo e o ponte em que gera
                max = f;
                xmax = x;
                ymax = y;
                rep = 1;
            }
            
            y++;
        }
        x++;
    }
    
        //Saída de dados 
    cout << "\nO valor máximo dessa função: " << max << endl;
    cout << "O ponto (x) que gera o maior valor de f(x,y): " << xmax << endl;
    cout << "O ponto (y) que gera o maior valor de f(x,y): " << ymax << endl;
    cout << "A quantidade de vezes que esse valor máximo aparece: " << rep << endl;
    
    return 0;
}

