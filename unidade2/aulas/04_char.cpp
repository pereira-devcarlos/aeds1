/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 21 de maio de 2025, 08:27
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main() {
    char nome[30], sobreNome[30], nameComplete[60];
    int i, j;
    
    nome[0] = 'C';
    nome[1] = 'a';
    nome[2] = 'r';
    nome[3] = 'l';
    nome[4] = 'o';
    nome[5] = 's';
    nome[6] = '\0';
    
    printf("\n Nome: %s\n", nome);
    
    sobreNome[0] = 'E';
    sobreNome[1] = 'd';
    sobreNome[2] = 'u';
    sobreNome[3] = 'a';
    sobreNome[4] = 'r';
    sobreNome[5] = 'd';
    sobreNome[6] = 'o';
    sobreNome[7] = '\0';
    
    printf("\n Sobrenome: %s\n", sobreNome);
    
    for(i=0; i<30; i++){
        nameComplete[i] = nome[i];
        if(nameComplete[i] == '\0'){
            nameComplete[i] = ' ';
            i=30 + 1;
        }
    }
    j=0;
    for(i=0; i<30;i++){
        if(nameComplete[i]==' '){
            i++;
            for(j=0; j<30 ; j++, i++){
                nameComplete[i] = sobreNome[j];
            }
        }
    }
    
    printf("\n Nome Completo: %s\n", nameComplete);
    
    return 0;
}

