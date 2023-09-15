#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    float f;

    printf("Enter temperature:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    if(c<-10) {printf("%f très froid",f);}
    else if (c > 11 && c < 23)  {printf("%.2f froid",c);}
    else if (c > 24 && c < 30)  {printf("%.2f chaud",c);}
    else if (c > 30 && c < 60) {printf("%.2f très chaud",c);}
    return 0;
}
