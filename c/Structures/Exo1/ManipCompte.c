#include "stdio.h"
#include "stdlib.h"
#include "manipCompte.h"

CPTEBQUE *createCpte (int debit, int credit, int ident)
{
    
    CPTEBQUE* compte;
    compte = malloc(sizeof(CPTEBQUE));

    compte->debit = debit;
    compte->ident = ident;
    compte->credit = credit;
    return compte;
}

void afficheCpte (CPTEBQUE *cpte)
{
    printf("ID CPTE : %d   CREDIT : %f  DEBIT : %f\n",cpte->ident,cpte->credit,cpte->debit);
}

double etatCpte (CPTEBQUE *cpte)
{
    double solde;

    solde = cpte->credit-cpte->debit;

    return solde;
}

int CpteAPb (CPTEBQUE *cpte)
{
    int statut;
    if(cpte->debit>cpte->credit)
    {
        statut = 1;
    }
    else
    {
        statut = 0;
    }
    return statut;
}