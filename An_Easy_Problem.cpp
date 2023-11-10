#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main() {
    int ans, mx, tmp;
    char ss[1000];
    while (gets(ss) != NULL){
        ans = 0; mx = 1;
        int i;
        for (i = 0; i < strlen(ss); i++) {
            if (ss[i] >= '0' && ss[i] <= '9') {
                tmp = ss[i] - '0';
            } else if (ss[i] >= 'A' && ss[i] <= 'Z') {
                tmp = ss[i] - 'A' + 10;
            } else if (ss[i] >= 'a' && ss[i] <= 'z') {
                tmp = ss[i] - 'a' + 36;
            } else continue;
            if (mx < tmp) mx = tmp;
            ans += tmp;
        }
        for (i = mx; i < 62; i++)
            if (ans % i == 0) {
                printf("%d\n", i + 1);
                break;
            }
        if (i == 62) printf("such number is impossible!\n");
    }
}