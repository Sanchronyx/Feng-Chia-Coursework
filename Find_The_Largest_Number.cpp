#include <stdio.h>

int main(void){

    int num[11] = {0};
    int max = 0;
    int i = 0;

    while (i != 10){
        scanf("%d", &num[i]);
        i++;
    }
    max = num[0];
    for (int j = 0; j < i; j++){
        if (num[j] > max)max = num[j];
        }
    printf("%d", max);

    return 0;
}