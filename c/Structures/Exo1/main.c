#include <stdio.h>
#include "lectureClientFile.h"
#include "manipCompte.h"
#include "gereClients.h"

int main(void) {

	FILE *  file = ouvertureFichier("Clients.txt");

	int number = getNumberClient(file);

	char *name = getClientName(file);

	int id = getCpteCourantId(file);

	printf("%d %s %d\n", number, name, id);

	CPTEBQUE* compte = createCpte(10,200,30);
	printf("\n");
	afficheCpte(compte);
	CLIENT* clients;
	clients= createTabClients(file);
	afficheNomClients(clients,29);
	afficheRefClients(clients,29);
	CLIENTSUISSE* clientSuisse;
	clientSuisse = clientsCpteSuisse(clients,29);
	CLIENTSUSPECT* clientSuspect;
	clientSuspect=clientsSuspicieux(clients, 29);
	clients=triNomClients(clients,29);

	afficheNomClients(clients,29);
	
}
