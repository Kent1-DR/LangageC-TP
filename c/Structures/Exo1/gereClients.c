#include <stdio.h>
#include "gereClients.h"
#include <stdlib.h>
#include <string.h>

CLIENT* createTabClients(FILE* file)
{
    int nbClients = getNumberClient(file);
    CLIENT* tabClients= (CLIENT*)malloc(nbClients*sizeof(CLIENT));
    for (int i = 1; i < nbClients; i++)
    {   
        char* name= getClientName(file);
        tabClients[i].name=name;
        int id=getCpteCourantId(file);
        int credit=getCredit(file);
        int debit = getDebit(file);
        CPTEBQUE *cpt=createCpte(debit,credit,id);
        tabClients[i].cpteCourant=cpt;
        
        int idSuisse=getCpteSuisseId(file);
        if(idSuisse!=0)
        {
            int creditSuisse=getCredit(file);
            int debitSuisse = getDebit(file);
            CPTEBQUE *cptSuisse=createCpte(debitSuisse,creditSuisse,idSuisse);
            tabClients[i].cpteSuisse=cptSuisse;
        }
        else
        {
            tabClients[i].cpteSuisse=NULL;
        }

    }
    


    return tabClients;

}

void afficheNomClients(CLIENT *tabClients, int nbClients)
{
    for (int i = 1; i < nbClients; i++)
    {
        
        printf("\n\nnom : %s",tabClients[i].name);

    }
    
}
void afficheRefClients(CLIENT *tabClients, int nbClients)
{
    for (int i = 1; i <= nbClients; i++)
    {

        printf("\nid Compte Courant : %d, debit : %f, credit : %f\n", tabClients[i].cpteCourant->ident, tabClients[i].cpteCourant->debit, tabClients[i].cpteCourant->credit);
        if(tabClients[i].cpteSuisse==NULL)
        {
            printf("\nPas de compte Suisse\n\n");
        }
        else
        {
            printf("\nid Compte Suisse : %d, debit : %f, credit : %f\n\n", tabClients[i].cpteSuisse->ident, tabClients[i].cpteSuisse->debit, tabClients[i].cpteSuisse->credit);
        }
    }
}

CLIENTSUISSE* clientsCpteSuisse(CLIENT *tabClients, int nbClients) 
{
    CLIENTSUISSE* clientSuisse = (CLIENTSUISSE*)malloc(nbClients*sizeof(CLIENTSUISSE));
    int n=0;
    for (int i = 0; i < nbClients; i++)
    {
        if(tabClients[i].cpteSuisse!=NULL)
        {
            clientSuisse[n].name=tabClients[i].name;
            clientSuisse[n].index=tabClients[i].cpteSuisse->ident;
            n++;
        }
    }
    return clientSuisse;
}

CLIENTSUSPECT* clientsSuspicieux(CLIENT *tabClients, int nbClients)
{
    CLIENTSUSPECT* clientSuspect = (CLIENTSUSPECT*)malloc(nbClients*sizeof(CLIENTSUSPECT));
    int n=0;
    for (int i = 0; i < nbClients; i++)
    {
        if(tabClients[i].cpteCourant!=NULL)
        {
            if((tabClients[i].cpteCourant->debit>tabClients[i].cpteCourant->credit)&&(tabClients[i].cpteSuisse==NULL))
            {
                clientSuspect[n].name=tabClients[i].name;
                clientSuspect[n].index=tabClients[i].cpteCourant->ident;
                n++;
            }
        }
    }
    return clientSuspect;
}

CLIENT* triNomClients(CLIENT* tabClients, int nbClients)
{
    char *tmp; 

    for (int i = 0; i < nbClients; i++) 
    {
        for (int j = 0; j < nbClients; j++)
        if (compareString=)
        {
            tmp = tabClients[i].name;
            tabClients[i].name = tabClients[j].name;
            tabClients[j].name = tmp;
        }
    }  
}

int compareString(char* string1, char* string2)
{
    int result;
    int intToS1;
    int intToS2;
    for (int i = 0; i < 20; i++)
    {
        intToS1=string1[i];
        intToS2=string2[i];
        if(intToS1=intToS2)
        {
            if(intToS1=intToS2)
            {   

                if(intToS1>intToS2)
                {
                    return result=1
                }
                else
                {
                    return result=0;
                }
            }
            if(intToS1>intToS2)
            {
                return result=1
            }
            else
            {
                return result=0;
            }
        }
        if(intToS1>intToS2)
        {
            return result=1
        }
        else
        {
            return result=0;
        }
    }
}