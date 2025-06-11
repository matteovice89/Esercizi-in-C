/* Troviamo ciclo for, array, scanf */
#include <stdio.h>

int main()
{
    printf("INSERISCI 5 NUMERI ED IO ESEGUIRò LA SOMMA\n");
    int numeri[5], somma=0;
    for (int i=0; i<5; i++) {
        printf("Inserisci il numero %d\n", i+1);
        scanf("%d",&numeri[i]);
        somma=somma+numeri[i];
    }
    for (int i=0; i<5; i++) {
        printf("%d ",numeri[i]);
        
    }
    printf("la somma dei numeri è %d",somma);

    return 0;
}
