/*
Female Bee = 1 Male Bee
Male Bee = 1 Male Bee + 1 Female Bee
They both die afterwards

Immortal Female Bee = 1 Male Bee
First year totaol male bee = 2
Total Male Bee = 3 Every Year
Female = 1 Every Year

How many Bees after N Years

Find Number of Male Bees
Total Bees after N years
*/

#include <stdio.h>

int n = 0;

int bees(int nbees){
    int immortal_bee = 0, i = 0;
    int female_bee = 0;
    int male_bee;
    for (i = 1; i <= n ; i++){
        immortal_bee += 1;
        if (i == 1){
            female_bee += 0;
            male_bee += 1;
        }
        else {
            female_bee += 1;
            male_bee += 2;
        }
        male_bee -= 2;
        female_bee -= 1;
    }
    int overall_total = male_bee + immortal_bee + female_bee;
    int total_male;
    return (male_bee, female_bee, immortal_bee);
}

int main(void){

    int calc = 0;
    while (n != -1){
        scanf("%d", &n);
        calc = bees(n);
        if (n == -1)break;
    }
}