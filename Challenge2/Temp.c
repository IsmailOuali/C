#include<stdio.h>

int main()
{
    float f;
    float c;

    printf("Entrer la temperature en Fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32)/1.8;

    if (c < 0)
    {
        printf("Tres froid");
    }
    if (c >= 0 && c < 25)
    {
        printf("froid");
    }
    if (c >= 25 && c < 35)
    {
        printf("chaud");
    }
    printf("tres chaud");
    

}