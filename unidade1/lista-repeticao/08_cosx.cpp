/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 30 de abril de 2025, 09:48
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int i, termo, den, fat, sinal;
    float x, num, coseno;

    cout << "Digite o valor de x(em radianos): ";
    cin >> x;
    cout << "Digite o número de termos: ";
    cin >> termo;

    num = 1;
    sinal = 1;
    fat = 0;
    den = 1;
    coseno = 1;
    i = 1;

    while (i < termo) {
        fat += 2;
        den *= fat * (fat - 1);
        
        sinal = -sinal; 
        num *= x*x;
        coseno += (sinal * num) / den;
        i++;
    }

    cout << "O valor aproximado de coseno de x: " << coseno << endl;
    
    
    return 0;
}

