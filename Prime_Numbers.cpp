#include <stdio.h>

int main(void){

    int prime = 0;
    int i = 0, count = 0;

    while (1){
        scanf("%d", &prime);
        if (prime == -1)break;
        if (prime < 2)printf("Invalid value\n");
        else count = 0;

        for (i = 1; i <= prime; i++){
            if (prime % i == 0)count++;
        }
        if (count > 2)printf("No\n");
        else if (count == 2)printf("Yes\n");
    }
    return 0;
}