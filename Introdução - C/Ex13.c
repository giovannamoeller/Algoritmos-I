#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, area, p;
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2f m2", area);
}