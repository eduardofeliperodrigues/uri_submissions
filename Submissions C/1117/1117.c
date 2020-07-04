//accepted on 04/07/2020 16:55:04
#include <stdio.h>

void main(){
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
}