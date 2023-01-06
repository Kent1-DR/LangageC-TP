#include "stdlib.h"
#include "stdio.h"

void comptage(void);

void main(void)
{
    comptage();
}

void comptage(void)
{
    char caractere;
    char tab_char[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int tab_compt[27];
    int i;

    for (i = 0; i <=27; i++)
    {
        tab_compt[i]=0;
    }
    
    do
    {
        printf("rentrer un caractere\n");
        scanf("%s",&caractere);
        for(i=0;i<27;i++)
        {
            if(caractere==tab_char[i])
            {
                tab_compt[i]++;
            }
            if (i==26 && caractere!='\0')
            {
                tab_compt[i]++;
            }
        }
        
    } while (caractere != 'E');

    for (i = 0; i < 26; i++)
    {
        printf("il y a %d %c\n", tab_compt[i],tab_char[i]);
    }
    printf("il y a %d valeur(s) non reconnue(s)\n",tab_compt[26]);

}