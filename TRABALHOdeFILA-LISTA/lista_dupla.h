#ifndef LISTA_DUPLA_H_INCLUDED
#define LISTA_DUPLA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


typedef struct nO{
int DADO;
struct nO *PROXIMO;
struct nO *ANTERIOR;
}NO;

typedef struct{
NO *INICIO;
NO *FIM;
}ListaDupla;

ListaDupla* criar_lista();
void destruir_lista(ListaDupla *l);
void inserir_inicio(ListaDupla *l, int id);
void inserir_fim(ListaDupla *l, int id);
int remover_item(ListaDupla *l, int id);
void imprimir_frente(ListaDupla *l);
void imprimir_tras(ListaDupla *l);


/**//**//**//**//**//**//**//**//**//**//**//**/
int lerInteiro(void);
/**//**//**//**//**//**//**//**//**//**//**//**/
#endif // LISTA_DUPLA_H_INCLUDED
