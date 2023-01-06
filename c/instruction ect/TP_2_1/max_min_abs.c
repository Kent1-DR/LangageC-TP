#include "stdlib.h"
#include "stdio.h"


void max(float a, float b);
void min(float a, float b);
void absolue(float a, float b);


void main()
{
    float a= 45.23;
    float b=-24.89;

    max(a,b);
    min(a,b);
    absolue(a,b);
}

void max(float a, float b)
{
    if(a>b)
    {
        printf("le plus grand des deux nombres est : %f\n",a);
    }
    else if (a<b)
    {
        printf("le plus grand des deux nombres est : %f\n",b);
    }
    else
    {
        printf("les deux nombres sont égaux.\n");
    }
    
}

void min(float a, float b)
{
    if(a<b)
    {
        printf("le plus petit des deux nombres est : %f\n",a);
    }
    else if (a>b)
    {
        printf("le plus petit des deux nombres est : %f\n",b);
    }
    else
    {
        printf("les deux nombres sont égaux.\n");
    }
    
}

void absolue(float a, float b)
{
    float a_abs = a;
    float b_abs = b;
    if(a_abs<0)
    {
        a_abs=a*(-1);
    }
    if(b_abs<0)
    {
        b_abs=b*(-1);
    }
    

    printf("les valeurs absolues de %f et %f sont respectivement : %f et %f\n",a,b,a_abs,b_abs);

}