#include <stdio.h>

void main(){
    int acool=0, gasolina =0, diesel =0, combustivel, teste = 0;
    while(teste != 4){
        scanf("%d", &combustivel);
        switch (combustivel)
        {
        case 1:
            acool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            teste = 4;
        default:
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", acool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}