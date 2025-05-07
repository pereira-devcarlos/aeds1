/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 30 de abril de 2025, 09:05
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int i, termo, den, fat, sinal;
    float x, num, seno;

    cout << "Digite o valor de x(em radianos): ";
    cin >> x;
    cout << "Digite o número de termos: ";
    cin >> termo;

    num = x;
    sinal = 1;
    fat = 1;
    den = 1;
    seno = x;
    i = 1;

    while (i < termo) {
        fat += 2;
        den *= fat * (fat - 1);
        
        sinal = -sinal; 
        num *= x*x;
        seno += (sinal * num) / den;
        i++;
    }

    cout << "O valor aproximado de seno de x: " << seno << endl;
    
    return 0;
}

