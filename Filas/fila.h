/* TAD: fila de valores reais */

#ifndef FILA_H
#define FILA_H

typedef struct fila Fila;

Fila* fila_cria(void); // OK
void fila_insere(Fila* f, float v); // OK
float fila_retira(Fila* f); // OK
int fila_vazia(Fila* f); // OK
void fila_imprime(Fila* f); // OK
void fila_libera(Fila* f); // OK
int fila_quantidade_elementos(Fila *f); // OK
void combina_filas (Fila* f_res, Fila* f1, Fila* f2);

#endif