#include "stdlib.h"
#include "stdio.h"

void min_max_tab(void);


void main(void)
{
    min_max_tab();
}

void min_max_tab(void)
{
    int tab[20];
    int i;
    for (i = 0; i < 20; i++)
    {
        tab[i]=rand() % 101;
        printf("%d  ",tab[i]);
    }
    int min = tab[0];
    int max = tab[0];

    for(i=1;i<20;i++)
    {
        if(tab[i]>max)
        {
            max=tab[i];
        }
        else if (tab[i]<min)
        {
            min=tab[i];
        }
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);


    
}