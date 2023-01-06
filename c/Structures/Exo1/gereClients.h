#pragma once
#include "lectureClientFile.h"
#include "manipCompte.h"


typedef struct CpteCLIENT
{ char* name;
  CPTEBQUE *cpteCourant;
  CPTEBQUE *cpteSuisse;
} CLIENT ;

typedef struct cpteClientSUISSE
{
  char* name;
  int index;

} CLIENTSUISSE;

typedef struct ClientSuspect
{
  char* name;
  int index;
} CLIENTSUSPECT;


CLIENT* createTabClients(FILE* file);
void afficheNomClients(CLIENT *tabClients, int nbClients);
void afficheRefClients(CLIENT *tabClients, int nbClients);
CLIENTSUISSE* clientsCpteSuisse(CLIENT *tabClients, int nbClients);
CLIENTSUSPECT* clientsSuspicieux(CLIENT *tabClients, int nbClients);

CLIENT* triNomClients(CLIENT* tabClients, int nbClients);
int compareString(char* string1, char* string2);