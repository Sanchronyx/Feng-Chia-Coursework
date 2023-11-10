#include <stdio.h>

int main(void){
    int i = 0, j = 0, n[10], count = 0;
    int max = 0, end = 0;

    while (1){
        scanf("%d", &count);
        if (count == 0)end = 1;

        while (count > 0){
            for (i = 0; i < 10; i++){
            scanf("%d", &n[i]);
            if (n[i] > max) max = n[i];
            }
            printf("%d\n", max);
            max = 0;
            count--;
        }
        printf("\n");
        if (end == 1)break;
    }
    return 0;
}