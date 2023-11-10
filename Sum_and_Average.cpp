#include <stdio.h>

int main(void){
    int num = 0, i = 0, anum = 0;
    double avg = 0, sum = 0;
    while (1){
        scanf("%d", &num);
        int fakenum = num;
        if (num == 0)break;
        while (num > 0){
            scanf("%d", &anum);
            sum += anum;
            num--;
        }
        avg = sum / fakenum;
        printf("%.lf %.2lf\n", sum, avg);
        sum = 0, avg = 0;
    }
}