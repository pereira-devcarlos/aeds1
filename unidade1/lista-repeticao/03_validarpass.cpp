/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 22 de abril de 2025, 11:03
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main() {
    string senhaCorrect= "algoritmo123";
    string senhaUser;
    int tentativas, i;
    i=3;
    tentativas = 0;
    
    while (i>tentativas){
        cout << "\nDigite a senha: ";
        cin >> senhaUser;
        
        if(senhaCorrect == senhaUser){
            cout << endl << "Acesso Aprovado, Parabéns senha correta !!!" << endl;
            i = 0;
        }
        else {
            i--;
            if (i>0){
                cout << "Você tem mais " << i << " tentativas" << endl;
            }
            else {
                cout << "\nAcesso Negado, número de tentativas excedidas.";
            } 
        }
    }

    return 0;
}

