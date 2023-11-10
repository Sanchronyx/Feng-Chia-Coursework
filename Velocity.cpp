#include <stdio.h>

int main(void){

    double u = 0, a = 0, t = 0;

    scanf("%lf %lf %lf", &u, &a, &t);

    double v = (u + (a*t));
    double s = (u*t) + (0.5*a*(t*t));

    printf("%.2lf\n%.2lf", v, s);

    return 0;
}