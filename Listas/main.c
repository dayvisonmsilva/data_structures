#include <stdio.h>
#include "Lista.h"

int main() {
    Lista* l;
    l = lst_cria();
    l = lst_insere(l, 23);
    l = lst_insere(l, 45);
    l = lst_insere(l, 56);
    l = lst_insere(l, 78);
    lst_imprime(l);
    printf("---------\n");
    l = lst_retira(l, 78);
    lst_imprime(l);
    printf("---------\n");
    l = lst_retira(l, 45);
    lst_imprime(l);
    printf("---------\n");
    lst_libera(l);
    return 0;
}