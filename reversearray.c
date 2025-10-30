/*Esercizio 1. Implementare una funzione reversei che inverte l’ordine di un array
di interi rispettando il seguente prototipo:
void reversei(int *dst, const int *src, unsigned size);*/

#include <stdio.h>
#define SIZE 9
void reversei(int *dst, const int *src, unsigned size){
    for (int i=0; i < size; i++){
        dst[i]=src[size -1 -i];
    }
}

void show(int *arr,unsigned size){
    for (int i=0;i<size;i++){
        printf("%d",arr[i]);
        
    }
    printf("\n");
}

int main()
{
int src[SIZE]={1,2,3,4,5,6,7,8,9};
int dst[SIZE];
reversei(dst,src,SIZE);
show(src,SIZE);
show(dst,SIZE);
}
