#pragma once
#pragma secure
#include <stdio.h>
#define MAX_IDENT_NAME 15
#define CPTE_INEXISTANT 0

FILE *ouvertureFichier(char *fileName);
// ouverture du fichier fileName
// retourne un pointeur sur le fichier ; NULL si l'ouverture  n'a pu se faire
void fermetureFichier (FILE *fichier);
// fermeture du fichier
int getNumberClient(FILE *fichier);
// lecture dans fichier du nombre de clients enregistr�s
char *getClientName(FILE *fichier);
// lecture dans fichier du nom du client
int getCpteCourantId(FILE *fichier);
// lecture dans fichier de l'identificateur du compte courant du dernier client identifi�
int getCpteSuisseId(FILE *fichier);
// lecture dans fichier de l'identificateur du compte suisse du dernier client identifi�
// retourne CPTE_INEXISTANT si le client n'a pas de compte suisse.
float getCredit(FILE *fichier);
// lecture dans fichier du cr�dit du dernier compte identifi� du dernier client trait�
float getDebit(FILE *fichier);
// lecture dans fichier du d�bit du dernier compte identifi� du dernier client trait�


// utilisation de l'encha�nement des fonctions :
// 1. ouvertureFichier
// 2. getNumberClient
// 3. pour chaque client :
//		3.1. getClientName
//		3.2. getCpteCourantId
//		3.3. getCredit
//		3.4. getDebit
//		3.5. getCpteSuisseId
//		si cpteSuisse existant (attention pas de gestion d'erreurs si lecture des
//      d�bit et cr�dit alors que le compte n'existe pas)
//			3.6. getCredit
//			3.7. getDebit
// 4. fermetureFichier
