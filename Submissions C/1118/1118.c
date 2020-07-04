//accepted on 04/07/2020 17:20:38
#include <stdio.h>

void main(){
    int novo_calculo = 1;
    while (novo_calculo == 1){
            float notaA = -1, notaB = -1;
        while((notaA < 0) || (notaA > 10)){
            scanf("%f", &notaA);
            if ((notaA < 0) || (notaA > 10)){
                printf("nota invalida\n");
            }
        }
        while((notaB < 0) || (notaB > 10)){
            scanf("%f", &notaB);
            if ((notaB < 0) || (notaB > 10)){
                printf("nota invalida\n");
            }
        }
        float media = (notaA + notaB) / 2;
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novo_calculo);
        while ((novo_calculo < 1 || novo_calculo > 2)){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &novo_calculo);
        }
    }
}