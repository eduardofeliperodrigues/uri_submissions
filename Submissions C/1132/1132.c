#include <stdio.h>

void main(){
    int x, y, maior, menor, soma= 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
    for(menor; menor <= maior; menor++){
        if (menor % 13 != 0){
            soma += menor;
        }
    }
    printf("%d\n", soma);
}