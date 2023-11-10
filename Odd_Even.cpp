#include <stdio.h>

int main(void){

    int n = 0, tell = 0;

    scanf("%d", &n);
    
    tell = n % 2;
    if (tell == 0){
        printf("even");
    }
    else printf("odd");

    return 0;

}