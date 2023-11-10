#include <stdio.h>

int main(void){
    int n = 0;

    while (1){
        scanf("%d", &n);
        if (n == 1 || n == 2){
            printf("Correct\n");
            break;
        }
        else printf("%d\n", n);
    }

    return 0;
}