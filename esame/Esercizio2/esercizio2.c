/*
 * Esercizio 2
 * Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza
 * crei un terzo array che contenga i valori dei precedenti array intervallati tra di loro (partendo dal primo elemento dell’array a)
 */

 #include<stdio.h>

 void zip(int *array_a, int *array_b, int *array_risultante, int dimensione) {
     int i;
     for(i = 0; i < dimensione; ++i) {
         array_risultante[2*i] = array_a[i];
         array_risultante[2*i + 1] = array_b[i];
     }
 }

void main( ) {
    int array_a[100];
    int array_b[100];
    int array_zip[200];
    int dimensione;

    // popolo gli array
    dimensione = sizeof(array_a)/sizeof(int);
    int i;
    for(i = 0; i < dimensione; ++i) {
        array_a[i] = i * 2;
        array_b[i] = i * 2 + 1;
    }

    zip(array_a, array_b, array_zip, dimensione);
    // stampo elementi dell'array risultante
    printf("elementi dell'array risultante: \n");
    for(i = 0; i < dimensione * 2; ++i) {
        printf("%d ", array_zip[i]);
    }
    printf("\n");
}
