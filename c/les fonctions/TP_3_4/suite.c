#include "stdlib.h"
#include "stdio.h"

void suite(int n);
void plusPetitn(void);

void main(void)
{
    //suite(5);
    plusPetitn();
}

void suite(int n)
{
    float u=0;

    for(int i=1; i<=n;i++)
    {
        u=(0.5)*u+3;
    }
    printf("u(%d) = %f\n",n,u);
}

void plusPetitn(void)
{
    float u=0, v;
    int n=0;
    do
    {
        v=u;
        u=(0.5)*u+3;
        n++;
    }while(u-v>0.0001);

    printf("%d\n",n);


}