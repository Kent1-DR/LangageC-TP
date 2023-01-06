#pragma secure
#include <stdlib.h>
#include "lectureClientFile.h"


FILE *ouvertureFichier(char *fileName)
{
	FILE *file;
	if ((file = fopen(fileName,"r")) == NULL)
		{
			fprintf(stderr, "\nErreur: Impossible de lire le fichier %s\n",fileName);
			return(NULL);
		}
	else
		return file;
}
void fermetureFichier (FILE *file)
{
	fclose(file);
}

int getNumberClient(FILE *file)
{	int dim;
	fscanf(file,"%d\n", &dim);
	return dim;
}

char *getClientName(FILE *file)
{	char *name = (char *) malloc(sizeof(char) *MAX_IDENT_NAME);
	fscanf(file,"%s", name);
	return name;
}

int getCpteCourantId(FILE *fic)
{
	int ident;
	fscanf(fic,"%d", &ident);
	return ident;
}

float getDebit(FILE *fic)
{
	float montant;
	fscanf(fic,"%f", &montant);
	return montant;
}

float getCredit(FILE *fic)
{
	float montant;
	fscanf(fic,"%f", &montant);
	return montant;
}

int getCpteSuisseId(FILE *fic)
{	int idCompteSuisse;
	fscanf(fic,"%d", &idCompteSuisse);
	return (idCompteSuisse);
}




 

