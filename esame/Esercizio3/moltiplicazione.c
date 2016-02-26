#include "somma.h"

int moltiplicazione(int a, int b) {
    int moltiplicazione;
    int risultato = 0;

    int i;
    for(i = b;i > 0; --i) {
        moltiplicazione = somma(a, 0);
        risultato = risultato + moltiplicazione;
    }
    return risultato;
}
