#include <stdio.h>

int main(void){
    double sales = 0;

    while (1){
        scanf("%lf", &sales);
        if (sales == -1)break;

        double first = (200 + (0.09 * sales));
        double second = (400 + (0.1 * sales));
        double third = (800 + (0.12 * sales));

        if (sales <= 5000)printf("%.lf\n", first);
        else if (sales <= 10000)printf("%.lf\n", second);
        else if (sales > 10000)printf("%.lf\n", third);
    }

    return 0;
} 