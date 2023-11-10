#include <stdio.h>

int main(void){

    int year;

    scanf("%d", &year);
    if (year < 1978)printf("Kobe wasn`t born.");
    else if (1978 < year && year < 1995)printf("Kobe, a student.");
    else if (1995 < year && year < 2020)printf("1st round 13th selected by Lakers.");
    else if (year >= 2020)printf("R.I.P. Kobe, mamba Forever.");

    return 0;
}