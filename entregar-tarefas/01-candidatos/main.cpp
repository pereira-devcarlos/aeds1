/* 
 * Arquivo:   main.cpp
 * Autor: 2024.2.08.001
 * Name:Carlos Eduardo Pereira dos Santos
 * Disciplina: AEDs I (Prática)
 * Criado em 27 de março de 2025, 10:08
 * Local: Unifal Santa Clara
 
   Objetivo:
 - O objetivo é um sistema que classifique os candidatos a uma vaga de emprego. 
 - É pegar os dados de entrada como: idadem, escolaridade, anos de expêriencia na área e o númerode certificados. 
 - E a saída de dados devemos retornar em qual categoria ele se encaixa nessa vaga de emprego. 
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
            //Declarando as váriaveis
    int idade, escolaridade, experiencia, certificados;
    
            //Título do Programa
    printf("\n\tVaga de Emprego");
    
            //Entradada de dados
    printf("\nDigite sua idade: "); //Recebendo o valor da idade
    scanf("%d", &idade);    
    
            //Recebendo o valor do nível da escolaridade
    printf("\nNíveis de Escolaridade\nNenhum: 0\nEnsino Médio: "
            "1\nSuperior: 2\nPós-Graduação: 3\n");
    printf("\nDigite o número do seu nível de escolaridade: ");
    scanf("%d", &escolaridade);
    
    printf("\nDigite a quantidade de anos de experiência: ");  //Recebendo o valor da experiência
    scanf("%d", &experiencia);
    
    printf("\nDigite o número de certificações: ");     //Recebendo o valor de certificações
    scanf("%d", &certificados);
    
    
                //Condições para os requisitos mínimos de dados
    if(idade>0 && escolaridade>=0 && escolaridade<4 && experiencia>=0 && certificados>=0){
        
            //Condições para o Candidato Rejeitado
        if(idade<18 || escolaridade<1 || (experiencia<1 && certificados==0)){
            printf("\n\nClassificação: Candidato Rejeitado");
        }
        else {
                //Condições para o Candidato Júnior
            if(escolaridade==1 && (experiencia>=1 || certificados>=1)){
                printf("\n\nClassificação: Candidato Júnior");
            }
            else {
                    //Condições para o Candidato Sênior
                if((escolaridade==2 && experiencia>=5 && certificados>=1) || (escolaridade==3 && experiencia>=3)){
                    printf("\n\nClassificação: Candidato Sênior");
                }
                else {
                        //Else para o último que sobrou no caso o Candidato Pleno
                    printf("\n\nClassificação: Candidato Pleno");
                }
            }
        }
        
                //Agradecimentos finais
        printf("\n\nAgradeço a disposição à enviar seus dados e competências. Boa sorte candidato(a) para essa vaga de emprego.\n");
    }
    
            //Else caso o usúario insira alguns dados errados
    else {
        printf("\nDados Inválidos, por gentileza insira seus dados novamente.\n");
    }

    return 0;
}

