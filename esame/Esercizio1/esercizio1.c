/*
 * Esercizio 1
 * Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti.
 * Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).
 */

#include<stdio.h>

double average(int *array, int dimensione) {
    double somma = 0;

    int i;
    for(i = 0; i < dimensione; ++i) {
        somma = somma + array[i];
    }
    return somma / dimensione;
}

double main( ) {
    int elenco[100];
    double risultato;
    int dimensione;

    int i;
    for(i = 0; i < sizeof(elenco)/sizeof(int); ++i) {
        elenco[i] = (i + 1) * 3;
    }
    dimensione = sizeof(elenco)/sizeof(int);

    risultato = average(elenco, dimensione);
    printf("Risultato media: %f\n", risultato);
    return 0;
}
