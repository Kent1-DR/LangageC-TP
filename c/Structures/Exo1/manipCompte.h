#pragma once

#define CPTE_PB 1
#define CPTE_SANS_PB 0
typedef struct CPTE
{ int ident;
  double credit;
  double debit;
} CPTEBQUE ;

CPTEBQUE *createCpte (int debit, int credit, int ident);
// cr�ation d'une structure de type CPTEBQUE et initialistion des champs: d�bit, cr�dit et ident 
// la fonction retourne un pointeur sur la structure cr��e
void afficheCpte (CPTEBQUE *cpte);
// affichage des informations de la structure CPTEBQUE pass�e en param�tre.
// L'affichage est de la forme : 
//  ID CPTE : <ident>   CREDIT : <montant>  DEBIT : <montant>
//  o� <ident> est un entier et <montant>, un r�el affich� sur 12 positions avec 2 chiffres apr�s la virgule
double etatCpte (CPTEBQUE *cpte);
// retourne le solde du compte pass� en param�tre (i.e. cr�dit - d�bit)
int CpteAPb (CPTEBQUE *cpte);
// retourne CPTE_PB si le compte est � probl�me, CPTE_SANS_PB sinon.
// un compte est � probl�me s'il est d�biteur (d�bit > cr�dit).
