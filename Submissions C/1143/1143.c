#include <stdio.h>
#include <math.h>

void main(){
    int i, counter;
    scanf("%d", &counter);

    for(i = 1; i <= counter; i++){
        double squared = pow(i, 2);
        double cubed = pow(i, 3);
        printf("%d %.0lf %.0f\n", i, squared, cubed);
    }
}