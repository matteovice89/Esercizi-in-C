#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n=0;
	printf("***STAMPA UNA DI NUMERI CASUALI DA 0 A N E ANNOTO QUANTE VOLTE COMPARE OGNI NUERO***\n");
	printf("Inserisci N \n");
	srand(time(NULL));
	scanf("%d",&n);
	int numeri[n+1],conta[n+1];
	printf("Stampo la sequenza di numeri \n");
	for (int i=0; i<n+1; i++) {
		numeri[i]=rand() %n+1;
		printf("%d ",numeri[i]);
		conta[i]=0;
	}

	for (int i=0; i<n+1; i++) {
		for (int j=0; j<n+1; j++) {
			if (i ==numeri[j]) {
				conta[i]++;
			}

		}
	}
	for (int i=0; i<n+1; i++) {
		printf("\nIl numero %d compare %d volte \n",i,conta[i]);
	}
}
