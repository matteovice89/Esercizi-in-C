Implementare una funzione matrix_edge che, data una matrice come input, calcoli la somma di tutti i valori presenti nella sua cornice. La funzione deve rispettare il seguente prototipo:

long matrix_edge(unsigned rows, unsigned cols, int m[][cols]);

dove:

    m è la matrice di input, con n_rows righe e n_cols colonne;
    la funzione calcola il risultato e restuisce la somma tramite il suo valore di ritorno.
*/

#include <stdio.h>

long matrix_edge(unsigned rows, unsigned cols, int m[][cols]) {
	int somma=0;
	for (int r=0; r<rows; r++) { //scorro tutti i valori della matrice
		for(int c=0; c<cols; c++) {
			if(r==0) {
				somma=somma+m[r][c];
			}
			else if(r==rows-1) {
				somma=somma+m[r][c];

			}
			else if(c==0 && r!=0) {
				somma=somma+m[r][c];
			}
			else if(c==cols-1 && r!=0) {
				somma=somma+m[r][c];
			}

		}
	}

	return somma;
}

int main()
{
	int m[4][4] = {
		{1,  1,  1,  1},
		{1,  6,  7,  1},
		{1,10, 11, 1},
		{1, 1, 1, 1},
	};
	printf("matrix edge sum = %ld\n", matrix_edge(4, 4, m));
}
