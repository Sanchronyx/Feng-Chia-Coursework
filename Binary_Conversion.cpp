#include <stdio.h>
#include <math.h>

int main(void){

    int n = 0, i = 1, convert = 0;
    int temp = 0, another_n = 0;

    scanf("%d", &n);
    while (n != 0){

        convert = 0;
        another_n = n;

        for (i = 1; another_n > 0; i *= 2){
            temp = (another_n % 10) * i;
            convert += temp;
            another_n /= 10;
        }

        printf("%d\n", convert);
        scanf("%d", &n);
    }

}