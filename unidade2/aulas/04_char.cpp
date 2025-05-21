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
    
    // Retirar os espaços do nome completo
    for(i=0; i<60; i++){
        if(nameComplete[i]==' ')
            for(i=i;i<60-1; i++){
                nameComplete[i] = nameComplete[i+1];
            }
    }
    // Exibindo o nome completo sem espaço entre nome e o sobrenome
    printf("\n Nome Completo sem espaçamento: %s\n", nameComplete);
    
    printf("\n Digite a oque deseja buscar no nome completo: ");
    scanf("%s", &nome); // Nome = ao que o user deseja buscar
    
            // Econtrar uma sequência de caracteres em um nome completo
    // Utilizando o algoritmo clássico de busca de substring (case sensitive)!!!
    int len_nameComplete = 0;
    
    // Calculando o tamanho do nameComplete e nome
    while(nameComplete[len_nameComplete] != '\0'){
        len_nameComplete++;
    }
    
    int len_nome = 0;
    while(nome[len_nome] != '\0'){ 
        len_nome++;
    }

    // Busca da substring no nameComplete
    int found = 0; // Variável para indicar se encontramos a substring

    // Percorre cada posição possível de início da substring dentro do nameComplete
    for(i = 0; i <= len_nameComplete - len_nome; i++) {
        int match = 1; // Assume que vai encontrar a substring a partir dessa posição
        
        // Compara cada caractere da substring com o trecho correspondente do nameComplete
        for(j = 0; j < len_nome; j++) {
            if(nameComplete[i + j] != nome[j]) { // Se algum caractere for diferente...
                match = 0; // ...não é uma correspondência
                break; // Para de comparar, não adianta continuar
            }
        }
        if(match) { // Se todos os caracteres combinaram
            found = 1; // Marca que encontramos a substring
            break; // Não precisa continuar procurando
        }
    }

    // Exibir os resultados da busca
    if(found)
        printf("\nA sequência '%s' foi encontrada no nome completo.\n", nome);
    else
        printf("\nA sequência '%s' NÃO foi encontrada no nome completo.\n", nome);
    
    return 0;
}
