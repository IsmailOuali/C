#include<stdio.h>

int main()
{
    int n;
    int m;

    scanf("%d", &n);
    m = n % 10;
    printf("%d", m);
    n = n / 10;
    m = n % 10;
    printf("%d", m);
    n = n / 10;
    printf("%d", n);


}