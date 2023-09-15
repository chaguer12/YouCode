#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   int y;
   printf("Entrez le premier nombre:");
   scanf("%d",&x);
   printf("Entrez le deuxieme nombre:");
   scanf("%d",&y);
   printf("L'ADDITION: %d \n",x+y);
   printf("LA MULTIPLICATION: %d \n",x*y);
   printf(" LASOUSTRACTION: %d \n",x-y);
   printf("LA DIVISION: %d \n",x/y);
   printf("LE RESTE DE DIVISION: %d \n",x%y);
    return 0;
}
