/*Esercizio 2. Implementare una funzione reverses che inverte l’ordine dei
caratteri di una stringa C rispettando il 
seguente prototipo: void reverses(char *dst, const char *src);*/

#include <stdio.h>
void reverses(char *dst, const char *src){
    int dim=sizeof(src);
    for(int i=0;i<dim;i++){
        dst[i]=src[dim -1 -i];
        
    }
    printf("\n");
}

int main()
{
char src[]="ocropoid";
int dim=sizeof(src);
char dst[dim];
reverses(dst,src);
printf("%s\n",src);
printf("%s\n",dst);
}
