//Accepted on 04/07/2020 16:55:04
#include <stdio.h>

void main(){
    int i, repetitions;
    scanf("%d", &repetitions);

    for (i = 0; i < repetitions; i ++){
        int x, y;
        scanf("%d %d", &x, &y);
        fflush(stdin);
        if (y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n", x / (float)y);
        }
    }
}