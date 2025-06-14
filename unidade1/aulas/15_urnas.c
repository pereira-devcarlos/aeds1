#include <stdio.h>

int main(){    
    int secoes, urnas, nulos, secaoMe, urnaMe, secaoMa, urnaMa;
    int menos = 100;
    int maior = 0;

    scanf("%d", &secoes);

    for (int i = 0; i < secoes; i++){
        scanf("%d", &urnas);

        for (int j = 0; j < urnas; j++){
            scanf("%d", &nulos);
            if(nulos < menos){
                menos = nulos;
                secaoMe = i+1;
                urnaMe = j+1;
            }
            if(nulos > maior){
                maior = nulos;
                secaoMa = i+1;
                urnaMa = j+1;
            }
        }
    }
    printf("\nMenor numero de votos nulos foi a secao %d e a urna %d com apenas %d votos nulos\n", secaoMe, urnaMe, menos);
    printf("Maior numero de votos nulos foi a secao %d e a urna %d com o total de %d votos nulos\n", secaoMa, urnaMa, maior);

    return 0;
}