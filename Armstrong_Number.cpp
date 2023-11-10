#include <stdio.h>
#include <math.h>

int main(void){
    int storage = 0;
    int num = 0, n = 0;
    int power = 0, j = 0, count = 0;

    while (1){
        scanf("%d", &n);
        if (n < 0)break;
        storage = n;
        while (storage > 0){
            storage /= 10;
            count++;
        }
        num = n;
        while (num > 0){
            storage = num % 10;
            num /= 10;
            power += pow(storage, count);
        }
        if (power == n){
            printf("Yes\n");
        }
        else printf("No\n");
        power = 0;
        count = 0;
    }

    return 0;
}