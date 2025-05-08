/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 22 de abril de 2025, 10:14
 */

#include <cstdlib>
#include <stdio.h>
#include <ostream>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num, soma;
    soma = 0;
    
    cout << endl << "   Soma de Números Positivos" << endl;
    
    cout << "Iremos somar os números positivos que você digitar até digitar um número negativo e iremos informar o valor total!!!" << endl;
    cout << "Digite um número: ";
    cin >> num;
    
    while (num>=0){
        soma += num;
        cout << "Digite um número: ";
        cin >> num;
    }
    
    cout << endl << "A soma dos números positivos: " << soma << endl;
    return 0;
}

