#include "stdlib.h"
#include "stdio.h"

void etoiles(void);

void main(void)
{
    etoiles();
}

void etoiles(void)
{
    int i, j;
    int nb;
    printf("rentrer un nombre de ligne:     ");
    scanf("%d",&nb);
    printf("\n");

	for(i=0;i<nb;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("  *  ");
		}
		printf("\n\n");
	}
}