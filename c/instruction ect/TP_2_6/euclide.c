#include "stdlib.h"
#include "stdio.h"

int euclide(void);

void main(void)
{
    euclide();
}

int euclide(void)
{
    int a, b, tmp, r;
    printf("rentrer a:   ");
    scanf("%d",&a);
    printf("\nrentrer b (a>b):    ");
    scanf("%d",&b);
    if(a<b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if(b==0)
    {
        printf("\nle pgcd est :  %d",a);
        return 0;
    }

    while(b!=0)
    {
        r=a%b;
        if(r!=0)
        {
            a=b;
            b=r;
        }
        else
        {
            printf("\nle pgcd est :  %d",b);
            return 0;
        }
    }


}