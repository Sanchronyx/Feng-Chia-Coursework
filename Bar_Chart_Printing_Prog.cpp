#include <stdio.h>

int main(void){
    
    int n[6], i = 0, j = 0;
    int check = 0;
    char c = '*';

    while (1){
        check = 0;
        for (i = 1; i < 6; i++){
            scanf("%d", &n[i]);
            if (n[i] == -1)break;
            else if (n[i] > 30 ||  n[i] < 1){
                check = 1;
            }
        }

        if (n[i] == -1)break;
        if (check == 1)printf("Invalid value\n");
        else {
            for (i = 1; i < 6; i++){
                for (j = 1; j <= n[i]; j++){
                    printf("%c", c);
                }
                printf("\n");
            }
        }
    }
    return 0;
}