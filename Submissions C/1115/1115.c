//Accepted on 04/07/2020 16:36:30
#include <stdio.h>

void main(){
    int x, y;
    while ((x != 0) && (y != 0)){
        scanf("%d %d", &x, &y);

        if ((x > 0) && (y > 0)){
            printf("primeiro\n");
        }
        else if ((x < 0) && (y > 0)){
            printf("segundo\n");
        }
        else if ((x < 0) && (y < 0)){
            printf("terceiro\n");
        }
        else if ((x > 0) && (y < 0)){
            printf("quarto\n");
        }
    }
}