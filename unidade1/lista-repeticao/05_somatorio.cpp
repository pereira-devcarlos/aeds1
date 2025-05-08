/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 22 de abril de 2025, 11:59
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
    int i, soma, num;
    i=1;
    soma=1;
    
    cout << "Somatório" << endl;
    
    cout << "Digite o números de somas que deseja fazer: ";
    cin >> num;
    
    while (i < num){
       if(i % 2 == 0){
           soma = soma + i;
       }
       else {
           soma = soma - i;
       }
       i++;
    }
    
    cout << "Resultado da soma é " << soma << endl;

    return 0;
}

