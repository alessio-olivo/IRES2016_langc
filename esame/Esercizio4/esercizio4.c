/*
 * Esercizio 4
 * Creare una struttura Studente caratterizzata da un cognome e dal voto ottenuto.
 * Implementare le funzioni setCognome, getCognome, setNumeroEsami e getNumeroEsami
 * che ne impostano e restituiscano rispettivamente il cognome e il numero di esami dello studente
 * Nota: non porrere limiti alla lunghezza del cognome.
 *
 * Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).
 * PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.
 * Calcolare la somma dei voti degli studenti.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARRAY_STUDENTI 100000

//------------------------------ STRUTTURA
typedef struct{
    char *cognome;
    int voto;
}Studente;


//------------------------------ FUNZIONI DELLA STRUTTURA
void setCognome(Studente *x, char *cognome) {
    x->cognome = malloc(strlen(cognome) + 1);
    strcpy(x->cognome, cognome);
}
void setVoto(Studente *x, int voto) {
    x->voto = voto;
}
int getVoto(Studente *x) {
    return x->voto;
}


//------------------------------ FUNZIONE MAIN
int main( ){
    Studente *Studenti;
    int i;
    int somma_dei_voti = 0;
    char *buf = malloc(30);

    Studenti = malloc(sizeof(Studente) * ARRAY_STUDENTI);

    for (i = 0; i < ARRAY_STUDENTI; i++){
        sprintf(buf, "Studente%d", i);
        setCognome(&Studenti[i], buf);
        setVoto(&Studenti[i], i % 10);
    }

    //uso getVoto per calcolare la somma di tutti i voti.
    for (i = 0; i < ARRAY_STUDENTI; i++){
        somma_dei_voti = somma_dei_voti + getVoto(&Studenti[i]);
    }

    printf("%d\n", somma_dei_voti);

    //rilascio la memoria utilizzata con malloc
    free(Studenti);
    free(buf);

    return 0;
}
