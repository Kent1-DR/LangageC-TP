#include <stdio.h>
#include <stdlib.h>
void affiche(double *tab)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", tab[i]);
    }
        printf("\n");
}

void somme2(double *tab1, double *tab2, double *resultat)
{
    for (int i = 0; i < 10; i++)
    {
        resultat[i] = tab1[i] + tab2[i];
    }
}
/*
double * somme(double *tab1,double *tab2){
*/
void main()
{
    double *tab1 = malloc(10 * sizeof(double));
    double tab2[10];
    /// init les tableaux rand() ou random()
    for (int i = 0; i < 10; i++)
    {
        tab1[i] = i;
        tab2[i] = i;
    }
    affiche(tab1);
    affiche(tab2);
    double resultat[10];
    somme2(tab1, tab2, resultat);
    affiche(resultat);
    // affcihage la valeur de resultat
}