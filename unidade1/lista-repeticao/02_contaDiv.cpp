/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 22 de abril de 2025, 10:49
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    int i, num, divisor;
    divisor = 0;
    
    cout << "   Contador de Divisores" << endl;
    cout << "Digite um número: ";
    cin >> num;
    
    while (num < 0){
    	cout << "Erro: número negativo, por gentileza digite números positivos!" << endl;
    	cout << "Digite um número: ";
    	cin >> num;
    }
    
    i=1;
    while (i <= num){
        if(num % i == 0){
            divisor+= 1;
        }
        i++;
        
    }
    
    cout << endl << "Este número possui " << divisor << " divisores." << endl;
    if(divisor == 2){
        cout << "Este número é primo." << endl;
    }
    
    
    return 0;
}

