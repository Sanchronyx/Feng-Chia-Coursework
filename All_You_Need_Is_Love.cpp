#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int HCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void){

    char S1[30], S2[30];
    int conv1 = 0, conv2 = 0, converter = 1;
    int N = 0, i = 0, counter = 1;
    int power = 0;
    int check1[100], check2[100], ii = 0;;

    scanf("%d", &N);
    while(0 < N){
        scanf("%s", S1);
        scanf("%s", S2);

        int length1 = strlen(S1);
        power = 0, ii = 0;
        for (i = length1 - 1; i >= 0; i--){
            converter = S1[i] - 48;
            conv1 += converter * pow(2, power);
            power++;
            check1[ii] = conv1;
            ii++;
        }

        power = 0, ii = 0;
        int length2 = strlen(S2);
        for (i = length2 - 1; i >= 0; i--){
            converter = S2[i] - 48;
            conv2 += converter * pow(2, power);
            power++;
            check2[ii] = conv2;
            ii++;
        }
        
        int check = HCF(conv1, conv2);
        if (check > 1)printf("Pair #%d: All you need is love!\n", counter);
        else printf("Pair #%d: Love is not all you need!\n", counter);
        N--;
        counter++;

        conv1 = 0, conv2 = 0;
    }
    return 0;
}