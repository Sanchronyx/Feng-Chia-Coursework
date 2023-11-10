#include <stdio.h>

int main(void){

    int i = 0, n = 0, j = 0;

    scanf("%d", &n);
    
    int temp[6];

    for (i = 0; n > 0; i++){
        temp[i] = n % 10;
        n /= 10;
    }
    for (j = i; j > 0; j--){
        printf("%d   ", temp[j-1]); 
    }

    return 0;
}