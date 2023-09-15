#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[30];
    char p[30];
    char sexe[30];
    char t;
    int A;
    printf("Ecrivez votre num Tel: \n");
    scanf("%c",&t);
    printf("Ecrivez votre nom: \n");
    scanf("%s",&n);
    printf("Ecrivez votre prénom: \n");
    scanf("%s",&p);
    printf("Ecrivez votre sexe: \n");
    scanf("%s",&sexe);

    printf("Ecrivez votre age: \n\n");
    scanf("%i",&A);
    printf("NOM ET PRENOM:%s %s \n",n,p);
    printf("SEXE:%s \n",sexe);
    printf("TEL:%c \n",t);
    printf("AGE:%i \n",A);


    return 0;
}
