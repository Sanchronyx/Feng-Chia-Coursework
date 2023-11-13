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

int female(int bee){
    int immortal_bee = 0, i = 0;
    int female_bee = 0;
    int male_bee;
    for (i = 1; ;i++){
        immortal_bee += 1;
        if (i == 1){
            female_bee += 0;
            male_bee += 0;
        }
        else {
            female_bee += 1;
            male_bee += 1;
        }
        male_bee -= 1;
        female_bee -= 1;
    }
}

int main(void){

    int n = 0, i = 0;
    int fb = 0, mb = 0, ifb = 0, tmb = 0, ffb = 0;
    int tnmb = 0;
    while (n!=-1){
        
        scanf("%d", &n);
        for (i = 1; i <= n; i++){
            if (i == 1) fb += 0;
            else fb += 1; // Immortal Female Bee -> Male Bee
            mb += 1; // Male Bee -> Male Bee
            if (i == 1)fb += 0; // Female Bee -> Male Bee
            else fb += 1; // Female Bee -> Female Bee
            ffb += 1; // Male Bee -> Female Bee
            tnmb = ifb + mb + fb + ffb; // Total # of Bees
            tmb = ifb + mb + fb; // Total # of Male Bees
            mb-= 1, fb -= 1;
        }
    if (n == -1)break;
    printf("%d %d\n", tmb, tnmb);
    tnmb = 0, tmb = 0, ifb = 0, mb = 0, fb = 0, ffb = 0, mb = 0;
    }
    
}