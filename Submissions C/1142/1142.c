#include <stdio.h>

void main(){
    int i, counter, j=1;
    scanf("%d", &counter);

    for(i = 0; i< counter; i ++){
        while(j % 4 !=0){
            printf("%d ", j);
            j++;
        }
        j++;
        printf("PUM\n");
    }
}