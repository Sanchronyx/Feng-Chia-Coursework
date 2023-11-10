#include <stdio.h>

int main(void){

    double num[3];
    int i = 0, j = 0;
    double sum = 0, avg = 0, prod = 1, min, max;

    while (1){
    scanf("%lf", &num[i]);
    i++;
    if (i == 3)break; 
    }
    min = num[0];
    max = num[0];

    for (j = 0; j < i; j++){
        sum += num[j];
        prod *= num[j];
        if (num[j] < min)min = num[j];
        if (num[j] > max)max = num[j];
    }
    avg = sum / i;
    printf("%.lf\n%lf\n%.lf\n%.lf\n%.lf\n", sum, avg, prod, min, max);
    return 0;
}