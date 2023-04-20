/* TAD: lista de inteiros */

#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

Lista* lst_cria(void);
void lst_libera(Lista* l);

Lista* lst_insere(Lista* l, int i);
Lista* lst_retira(Lista* l, int v);

int lst_vazia(Lista* l);
Lista* lst_busca(Lista* l, int v);
void lst_imprime(Lista* l);

#endif