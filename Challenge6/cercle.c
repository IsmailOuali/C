#include<stdio.h>

int main()
{
    float r;
    const float pi = 3.14;
    float c;

    printf("Entrer le rayon de votre cercle : ");
    scanf("%f", &r);
    c = (2*r)*pi;
    printf("Le Circonférenced de cercle est : %.2f", c);


}