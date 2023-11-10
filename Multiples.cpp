#include <stdio.h>

int main(void){

    int first_num = 0, second_num = 0;

    scanf("%d %d", &first_num, &second_num);
    int multiple = first_num % second_num;

    if (multiple == 0)printf("Yes");
    else printf("No");

    return 0;
}