#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"

/* Struct que representa o nó da lista */
struct lista{
    int info;
    struct lista* prox;
};

/* função de criação: retorna uma lista vazia */ 
Lista* lst_cria(void) {
    return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere(Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));   
    novo->info = i;
    novo->prox = l;
    return novo;
}

/* função imprime:  imprime valores dos elementos */
void lst_imprime(Lista* l) {
    Lista* p; /* variável auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);    
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int lst_vazia(Lista* l) {
    if (l == NULL)
        return 1;
    else 
        return 0;
}

/* funcão busca: busca um elemento na lista */
Lista* lst_busca(Lista*l, int v) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox) {
        if(p->info == v)
            return p;
    }
    return NULL; /* não achou o elemento buscado */     
}

/* função retira: retira elemento da lista */
Lista* lst_retira(Lista* l, int v) {
    Lista* ant = NULL;
    Lista* p = l;

    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != v) {
        ant = p;
        p = p->prox;
    }

    /* verifica se achou elemento */
    if (p == NULL) {
        return l; /* não achou: retorna a lista original */
    }

    /* retira elemento */
    if (ant == NULL) {
        /* retira elemento do início */
        l = p->prox;
    } else {
        /* retira elemento do meio */
        ant->prox = p->prox;
    }

    free(p);
    return l;
}

/* função libera: libera elementos alocados */
void lst_libera(Lista* l) {
    Lista* p = l;
    while (p != NULL) {
        /* guarda referência p/ próx. elemento */
        Lista* t = p->prox;
        /* libera memória apontada por p */
        free(p);
        /* faz p apontar para o próximo */
        p = t;
    }
}