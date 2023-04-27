#include <stdio.h>
#include "fila.h"

int main(void) {
    Fila *f1, *f2, *f_res;
    
    f1= fila_cria();
    fila_insere(f1, 2.1);
    fila_insere(f1, 4.5);
    fila_insere(f1, 1.0);
    
    f1= fila_cria();
    fila_insere(f1, 7.2);
    fila_insere(f1, 3.1);
    fila_insere(f1, 9.8);

    return 0;
}