#include <stdio.h>

int main(void){
    int num = 0, i = 0;
    int store = 0, count = 0;
    while(1){

        scanf("%d", &num);
        if (num < 0)break;
        if (num > 99999)printf("Invalid value\n");
        for (i = 0; i < 5; i++){
            store = num % 10;
            if (store == 9)count++;
            num /= 10;
        }
        if (num <= 99999){
            printf("%d\n", count);
            count = 0;
            }
    }

    return 0;
}