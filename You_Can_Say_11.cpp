#include <stdio.h>
#include <string.h>

int main(void) {
    char num[1001];
    
    while (1) {
        if (scanf("%s", num) != 1) {
            break; 
        }

        if (strcmp(num, "0") == 0) {
            break; 
        }

        int len = strlen(num);
        int multiple = 0;

        for (int i = 0; i < len; i++) {
            if (i % 2 == 0) {
                multiple += num[i] - '0';
            } else {
                multiple -= num[i] - '0';
            }
        }

        if (multiple % 11 == 0) {
            printf("%s is a multiple of 11.\n", num);
        } else {
            printf("%s is not a multiple of 11.\n", num);
        }
    }

    return 0;
}