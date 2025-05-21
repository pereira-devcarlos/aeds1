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
    
    // Preenchendo os valores com meu nome
    nome[0] = 'C';
    nome[1] = 'a';
    nome[2] = 'r';
    nome[3] = 'l';
    nome[4] = 'o';
    nome[5] = 's';
    nome[6] = '\0';
    
    // Exibindo os valores com meu nome    
    printf("\n Nome: %s\n", nome);
    
    // Preenchendo os valores com meu sobrenome
    sobreNome[0] = 'E';
    sobreNome[1] = 'd';
    sobreNome[2] = 'u';
    sobreNome[3] = 'a';
    sobreNome[4] = 'r';
    sobreNome[5] = 'd';
    sobreNome[6] = 'o';
    sobreNome[7] = '\0';
    
    // Exibindo os valores com meu sobrenome   
    printf("\n Sobrenome: %s\n", sobreNome);
    
    // Adicionando o Nome no Char nameComplete
    for(i=0, j=0; nome[i]!='\0'; i++,j++){
        nameComplete[j]= nome[i];
    }
    
    nameComplete[j]=' '; //Adicionando o espaço após o nome
    j++;
    
    // Adicionando o Sobrenome no Char nameComplete
    for(i=0; sobreNome[i]!='\0'; i++,j++){
        nameComplete[j]=sobreNome[i];
    }
    nameComplete[j]=' '; // Finalizando com espaço caso precise adicionar outro nome
    
    // Exibindo o nome completo
    printf("\n Nome Completo: %s\n", nameComplete);
    
    // Retirando 32 bits para transformar as letras em Maiúsculas
    for(i=0; i<30; i++){
        if(nameComplete[i]>= 97) // Condição para decrementar apenas as letra minúsculas
            nameComplete[i]-= 32;
    }
    
    // Exibindo o nome completo em maiúsculo
    printf("\n Nome Completo em Maiúsculo: %s\n", nameComplete);
    
    // Retornar as letras em minúsculas, menos as letra iniciais
    for(i=1; nameComplete[i]!=' '; i++){
        nameComplete[i]+= 32;
    }
    i++; // Incrementando para manter o espaço ' ', pulando direto para o sobrenome 
    for(i+=1; nameComplete[i]!=' '; i++){
        nameComplete[i]+= 32;
    }
    // Exibindo o nome completo em minúsculo
    printf("\n Nome Completo em Minúsculo: %s\n", nameComplete);
    return 0;
}

