#include <stdio.h>

int main()
{
	int matr[3][4];//creo una matrice 3*4
	matr[0][0]=12; //alla posizione 0-0 assegno il valore 12
	printf("%d\n",matr[0][0]);//stampo il valore che C( nella posizione 0 0
	//creo una tabella esplicitando i valori
	int tab[3][4]= {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	//per gestire,stampare ed implementare valaori  faccio un doppio ciclo
	for (int r=0; r<3; r++) { //mi muovo sulle righe
		for (int c=0; c<4; c++) { // mi muovo sulle colonne
			matr[r][c]=24; //inserisco
		}
	}
	//stampo i valori di una matrice
	for (int r=0; r<3; r++) { 
		for (int c=0; c<4; c++) { 
			printf ("%d",matr[r][c]);
		}
		printf("\n"); //vado a capo prima di passare ad una prossima riga per leggere meglio
	}
	return 0;
}
