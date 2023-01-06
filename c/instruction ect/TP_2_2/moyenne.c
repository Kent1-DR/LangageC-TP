#include "stdlib.h"
#include "stdio.h"
void moyenne(void);

void main(void)
{
    moyenne();
}

void moyenne(void)
{
    float somme=0;
    float i=0;
    float entier_actuel;
    float moyenne;
    do
    {
        do
        {
            printf("veuillez rentrer un entier : ");
            scanf("%f",&entier_actuel);
        } while (entier_actuel < -1);
        if(entier_actuel != -1)
        {
            somme=somme+entier_actuel;
            i++;
        }
    } while (entier_actuel!=-1);

    moyenne=somme/i;

    printf("la moyenne est de : %f",moyenne);
    
    
}