#include <stdio.h>

int main(void){

    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = 0, month = 0, count = 0, total_day = 0;
    int i = 0;

    scanf("%d", &count);
    while (count--){
        total_day = 0;
        scanf("%d %d", &month, &day);
        for (i = 1; i < month; i++){
            total_day += days[i];
        }

        total_day += day;
        total_day %= 7;
        if (total_day == 0)printf("Friday\n");
        else if (total_day == 1)printf("Saturday\n");
        else if (total_day == 2)printf("Sunday\n");
        else if (total_day == 3)printf("Monday\n");
        else if (total_day == 4)printf("Tuesday\n");
        else if (total_day == 5)printf("Wednesday\n");
        else if (total_day == 6)printf("Thursday\n");

    }

    return 0;
}