#include <stdio.h>

int main(){    
    int secoes, urnas, nulos, secaoMe, urnaMe, secaoMa, urnaMa;
    int menos = 100; // Inicializa com valor alto para encontrar o menor número de votos nulos
    int maior = 0;   // Inicializa com zero para encontrar o maior número de votos nulos

    scanf("%d", &secoes); // Lê a quantidade de seções

    // Loop para cada seção
    for (int i = 0; i < secoes; i++){
        scanf("%d", &urnas); // Lê a quantidade de urnas na seção atual

        // Loop para cada urna da seção
        for (int j = 0; j < urnas; j++){
            scanf("%d", &nulos); // Lê a quantidade de votos nulos da urna

            // Verifica se encontrou um novo menor número de votos nulos
            if(nulos < menos){
                menos = nulos;
                secaoMe = i+1; // Guarda o número da seção 
                urnaMe = j+1;  // Guarda o número da urna 
            }
            // Verifica se encontrou um novo maior número de votos nulos
            if(nulos > maior){
                maior = nulos;
                secaoMa = i+1; // Guarda o número da seção 
                urnaMa = j+1;  // Guarda o número da urna 
            }
        }
    }

    // Exibe o resultado final
    printf("\nMenor numero de votos nulos foi a secao %d e a urna %d com apenas %d votos nulos\n", secaoMe, urnaMe, menos);
    printf("Maior numero de votos nulos foi a secao %d e a urna %d com o total de %d votos nulos\n", secaoMa, urnaMa, maior);

    return 0;
}