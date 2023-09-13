#include<stdio.h>
#include<math.h>

int main()
{   
    int x1;
    int x2;
    int y1;
    int y2;
    int dis;

    printf("Entrer les coordonnees de M : ");
    scanf("%d\n", &x1);
    scanf("%d", &y1);
    printf("Entrer les coordonnees de N : ");
    scanf("%d\n", &x2);
    scanf("%d", &y2);

    dis = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("La distance entre M(%d,%d) et N(%d, %d) est :", x1,y1,x2,y2);
    printf("%d", dis);

}
