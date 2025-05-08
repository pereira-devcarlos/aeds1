/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 22 de abril de 2025, 11:41
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
    int num, fatorial, i;
    i=1;
    fatorial=0;
    
    cout << "Fatorial de um Número" << endl;
    
    cout << "Digite um número: ";
    cin >> num;

    while(num<1){
        cout << endl << "Número inválido, digite um número inteiro que seja positivo!!!" << endl;
        cout << "Digite novamente um número: ";
        cin >> num;
    }
    
    fatorial = num;
    
    while(i < num){
        fatorial = fatorial * i;
        i++;
    }
    
    cout << endl << "O fatorial de " << num << " é " << fatorial << endl;
    
    return 0;
}

