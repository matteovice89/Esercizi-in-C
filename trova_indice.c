/*Esercizio 4. Implementare una funzione findi che individua la posizione
di un valore all’interno di un array di interi. La funzione rispetta il
seguente prototipo:

long findi(int value, const int *values, unsigned size);*/

#include <stdio.h>
#define SIZE 128
long findi(int value, const int *values, unsigned size){
    for (int i=0;i<size;i++){
        if(values[i]==value){
            return i;
        } 
        

    }

    return -1;
}

int main()
{
int values[SIZE]={5,10,88,1055,26,96,41,99,33,24,10055,56,32,85,62};
int value=56;
long controllo=findi(value,values,SIZE);
if(controllo==-1){
    printf("il valore %d non è stato trovato",value);
    
}else{
    printf("%d  trova in posizione %lo ",value,controllo);
}
    return 0;
}
