#include<stdio.h>

int main()
{
    int a;
    int b;
    int s;
    int sou;
    int pro;
    int mod;
    int div;

    printf("Entrer votre premier entier : ");
    scanf("%d", &a);
    printf("Entrer votre deuxieme entier : ");
    scanf("%d", &b);

    s = a + b;
    sou = a - b;
    pro = a * b;
    mod = a % b;
    div = a / b;

    printf(" %d + %d = %d\n", a, b, s);
    printf(" %d - %d = %d\n", a, b, sou);
    printf(" %d * %d = %d\n", a, b, pro);
    printf(" %d / %d = %d\n", a, b, div);
    printf(" %d %% %d = %d\n", a, b, mod);


}