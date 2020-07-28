#include <stdio.h>

void main(){
    int controller;
    scanf("%d", &controller);

    while(controller != 0){
        int counter = 1;
        for (counter; counter <= controller; counter++){
            if(counter == controller)
            {
                printf("%d", counter);
            }
            else
            {
                printf("%d ", counter);
            }
        }
        printf("\n");
        scanf("%d", &controller);
    }
}