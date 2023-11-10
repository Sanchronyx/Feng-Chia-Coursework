#include <stdio.h>

int main(void) {
    int guess = 38, n, chance = 10;

    while (chance > 0) {
        scanf("%d", &n);
        
        if (n == -1) {
            break;
        } else if (n > 100 || n <= 0) {
            printf("out of range\n");
        } else if (guess > n) {
            printf("too low\n");
        } else if (guess < n) {
            printf("too high\n");
        } else {
            printf("bingo\n");
            break;
        }

        chance--;
    }

    if (chance == 0) {
        printf("out of chance\n");
    }

    return 0;
}
