//Accepted on 01/07/2020 16:12:50

#include <stdio.h>

void main(){
    int cases, iteration, testA, testB, maior, menor, soma = 0;

    scanf("%d", &cases);

    for (iteration = 0; iteration < cases; iteration++){
        scanf("%d %d", &testA, &testB);
        if (testA > testB){
            maior = testA;
            menor = testB;            
        }
        else{
            maior = testB;
            menor = testA;
        }
        for (menor += 1; menor < maior; menor ++){
            if (menor % 2 != 0){
                soma += menor;
            }
        }
        printf("%d\n", soma);
        fflush(stdin);
        soma = 0;
    }
}