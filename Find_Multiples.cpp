#include <stdio.h>

int main(void){
    int i = 0;
    double num = 0, ognum = 1;
    double sum = 0, avg = 0, multiple = 0;

    while (1){
        scanf("%lf", &num);
        if(num == 0)break;
        sum = 0, avg = 0, multiple = 0;
        for (i = 1; i <= 100; i++){
            multiple = num * i;
            if (multiple <= 100)sum += multiple;
            else break;
            avg = sum / i;
        }
        printf("%.lf %.2lf\n", sum, avg);
    }

}