#include <stdio.h>

void main(){
    int novo_grenal = 1;
    int gremio = 0, inter = 0, grenais=0, vitoria_inter=0, vitoria_gremio=0, empate=0;

    while(novo_grenal == 1){
        grenais++;
        scanf("%d %d", &inter, &gremio);
        if(gremio > inter){
            vitoria_gremio++;
        }
        else if(inter > gremio){
            vitoria_inter++;
        }
        else{
            empate++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo_grenal);
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitoria_inter);
    printf("Gremio:%d\n", vitoria_gremio);
    printf("Empates:%d\n",empate);
    if(vitoria_inter == vitoria_gremio){
        printf("Nao houve vencedor\n");
    }
    else if(vitoria_gremio>vitoria_inter){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Inter venceu mais\n");
    }
}