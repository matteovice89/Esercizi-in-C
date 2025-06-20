#include <stdio.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int tabella [10][10];
	for (int r=0; r<10; r++) {
		for (int c=0; c<10; c++) {
			tabella[r][c]=rand() %100;
			printf("%3d ",tabella[r][c]);
		}
		printf("\n");
	}
}
