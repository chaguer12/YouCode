#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,x2;
    int y1,y2;
    int d;
    printf("Entrez x1 et y1:");
    scanf("%d%d",&x1,&y1);
    printf("Entrez x2 et y2:");
    scanf("%d%d",&x2,&y2);
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("la distance est: %d",d);

    return 0;
}
