#include<stdio.h>

int main()
{
    char nom[20];
    char prenom[20];
    int age;
    char sex[20];
    char num[20];

    printf("Entrez votre nom: ");
    scanf("%s", &nom);
    printf("Entrez votre prenom: ");
    scanf ("%s", &prenom);
    printf("Entrez votre age: ");
    scanf ("%d", &age);
    printf("Entrez votre sex: ");
    scanf ("%s", &sex);
    printf("Entrez votre numero telephone: ");
    scanf ("%s", &num);

    printf("\n Voici Votre informations\n");
    printf("\nNom : %s\n", &nom);
    printf("Prenom : %s\n", &prenom);
    printf("Age : %d\n", age);
    printf("sex : %s\n", &sex);
    printf("Numero : %s", &num);

}