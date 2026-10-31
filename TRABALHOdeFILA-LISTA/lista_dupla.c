#include "lista_dupla.h"


ListaDupla* criar_lista(){
ListaDupla *temp = malloc(sizeof(ListaDupla));
  if(temp == NULL){return NULL;}

  temp->INICIO = NULL;
  temp->FIM = NULL;

return temp;
}
void destruir_lista(ListaDupla *l){
if (l == NULL) {return;}
while(l->FIM != NULL){
    NO *aux = l->FIM;
    l->FIM = aux->ANTERIOR;
    free(aux);
}
free(l);
}


void inserir_inicio(ListaDupla *l, int id){}
void inserir_fim(ListaDupla *l, int id){}
int remover_item(ListaDupla *l, int id){}
void imprimir_frente(ListaDupla *l){}
void imprimir_tras(ListaDupla *l){}


/**//**//**//**//**//**//**//**//**//**//**//**/
int lerInteiro(void) {
    int valor;
    while(scanf("%d", &valor) != 1) {
        while(getchar() != '\n');
    }

    while(getchar() != '\n');
    return valor;
}
/**//**//**//**//**//**//**//**//**//**//**//**/
