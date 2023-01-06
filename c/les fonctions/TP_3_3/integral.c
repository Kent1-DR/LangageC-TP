#include "stdlib.h"
#include "stdio.h"

float f(float x) {
 return x * x +3;
}
 
int main()
{
 
 float a = 1;
 float b = 6;
 int n = 10;
 
 float h = (b - a) / n;
 float R = 0;
 
 for ( int i=0; i < n; i++){
 float x_i = a + i * h;
 
 R = R + f(x_i);
 }
 
 float integrale = R*h;
 
 printf("valeur de R: %f\n", integrale);
}