#include <stdio.h>

void main(){
    int x, y, i, j;
    scanf("%d %d", &x, &y);

    
    for(j = 1; j <= y; j++){
        for(i = 1; i <= x; i++){
            if(i != x){
                printf("%d ", j);
            }
            else{
                printf("%d", j);
            }
            j++;
            if(j > y){
                break;
            }
        }
        j--;
        printf("\n");
    }
}