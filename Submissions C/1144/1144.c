#include <stdio.h>
#include <math.h>

void main(){
    int counter, i;
    double squared, cubed;
    scanf("%d", &counter);

    for (i=1; i <= counter; i++){
        squared = pow(i, 2);
        cubed = pow(i, 3);
        printf("%d %.0lf %.0lf\n", i, squared, cubed);
        printf("%d %.0lf %.0lf\n", i, squared+1, cubed+1);
    }
}