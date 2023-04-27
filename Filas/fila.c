#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct lista{
    float info;
    struct lista *prox;
}Lista;

struct fila{
    Lista *ini;
    Lista *fim;
};

Fila* fila_cria(void){
    Fila * f = (Fila*) malloc(sizeof(Fila));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

int fila_vazia(Fila* f){
    return (f->ini == NULL);
}

void fila_insere(Fila* f, float v){
    Lista* new_list = (Lista*) malloc(sizeof(Lista));
    new_list->info = v;
    new_list->prox = NULL;
    if(f->fim != NULL) {
        f->fim->prox = new_list;
    } 
    else {
        f->ini = new_list;
    }
    f->fim = new_list;
}

float fila_retira(Fila* f){
    if (fila_vazia(f)) {
        printf("Fila vazia!\n");
        exit(1);
    }
    Lista* list;
    float v;
    list = f->ini;
    v = list->info;
    f->ini = list->prox;
    free(list);
    
    return v;
}

void fila_imprime(Fila *f){
	Lista *p;
	for(p=f->ini; p!=NULL; p=p->prox){
		printf(" Info = %.2f \n", p->info);
	}
}

void fila_libera(Fila* f){ 
   	Lista *aux = f->ini;
    Lista *x;
	while (aux != NULL) {   
		x = aux->prox;
        free(aux);
        aux = x;  
    }
    free(f);
}

int fila_quantidade_elementos(Fila *f) {
    int contador = 0;
    Lista *p;
	for(p=f->ini; p!=NULL; p=p->prox){
		contador++;
	}
    return contador;
}

void combina_filas (Fila* f_res, Fila* f1, Fila* f2){
    
}