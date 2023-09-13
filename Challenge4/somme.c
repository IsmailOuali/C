#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int m;

    printf("Entrer 4 entier : ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    m = (a + b +c +d)/4;
    printf("la moyenne est: %d", m);
}