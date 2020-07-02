//Accepted on 01/07/2020 21:19:08
#include <stdio.h>

int main(){
    int enter, password = 2002;
    while(1){
        scanf("%d", &enter);
        if(enter == password){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
}