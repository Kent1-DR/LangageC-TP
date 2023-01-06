#include "stdlib.h"
#include "stdio.h"
#include "math.h"

struct coordonnees {
    float* x;
    float* y;
    float* z;
};

void distance_points(void);

void main(void)
{
    distance_points();
}

void distance_points(void)
{
    struct coordonnees point;
    int i, nbpt;
    float calcule, distance;
    
    point.x = (float*)malloc(50*sizeof(float));
    point.y = (float*)malloc(50*sizeof(float));
    point.z = (float*)malloc(50*sizeof(float));

    for (i = 0; i < 50; i++)
    {
        point.x[i]=rand() % 51;
        point.y[i]=rand() % 51;
        point.z[i]=rand() % 51;
    }
    calcule =(point.x[0]*point.x[0])+(point.y[0]*point.y[0])+(point.z[0]*point.z[0]);
    distance=sqrt(calcule);
    for (i = 1; i < 50; i++)
    {
        calcule =(point.x[0]*point.x[0])+(point.y[0]*point.y[0])+(point.z[0]*point.z[0]);
        if(distance>sqrt(calcule))
        {
            distance=calcule;
            nbpt=i;
        }

    }
    printf("la distance minimale est de %f pour le pts n°%d  ", distance, nbpt);
    


}