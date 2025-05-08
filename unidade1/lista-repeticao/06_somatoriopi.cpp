/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 22 de abril de 2025, 12:07
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <string.h>

using namespace std;

/*
 * 
 */
int main() {
    int i=1;
    float num, divisor, pi, soma;
    
    divisor = 3.00;
    soma = 0;
    pi = 0;
    
    cout << "Digite o número de termos: ";
    cin >> num;
    
    while(i < num){
        if (i % 2 == 0){
            soma = soma + 1/divisor;
            cout << " " << soma << endl;
        }
        else {
            soma = soma - 1/divisor;
            cout << " " << soma << endl;
        }
        divisor += 2.00;
        i++;
    }
    
    pi = 4 * (1 + soma);
    
    cout << "Valor de pi é " << pi << endl;
    

    return 0;
}

