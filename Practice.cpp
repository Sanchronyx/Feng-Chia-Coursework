#include <stdio.h>

int main(void){
    int n = 0, i = 0, num = 0;
    double sum = 0, avg = 0;

    while (1){
        scanf("%d", &n);
        if (n == 0)break;
        for (i = 0; i < n; i++){
            scanf("%d", &num);
            sum += num;
        }
        avg = sum / i;
        printf("%.lf %.2lf\n", sum, avg);
        sum = 0, avg = 0;
    }
}