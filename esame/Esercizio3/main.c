/*
 * Esercizio 3
 * Creare due funzioni, somma e moltiplicazione. La prima accetta due interi e restituisce la loro somma.
 * La seconda accetta due interi e restituisce il loro prodotto, senza usare l’operatore *, ma basandosi sulla funzione somma precedentemente creata.
 *
 * Implementare la prima funzione (somma) su un file denominato: somma.c e dichiararla su un file somma.h
 * Implementare la seconda funzione (moltiplicazione) su un file denominato: moltiplicazione.c e dichiararla su un file moltiplicazione.h
 * Creare infine un file main.c contenente la funzione main che stampa a console il risultato del
 * prodotto di 3 per 5 e del prodotto di 0 e 15 utilizzando la funzione moltiplicazione.
 */

#include<stdio.h>
#include "moltiplicazione.h"

int main( ) {
    int soluzione1;
    int soluzione2;

    soluzione1 = moltiplicazione(3, 5);
    soluzione2 = moltiplicazione(0, 15);
    printf("%d %d\n", soluzione1, soluzione2);
}
