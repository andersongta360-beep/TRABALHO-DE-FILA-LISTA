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
void inserir_inicio(ListaDupla *l, int id){

    if(l == NULL){
        return;
    }

    NO *novo = malloc(sizeof(NO));
    if(novo == NULL){
        return;
    }

    novo->DADO = id;
    novo->ANTERIOR = NULL;
    novo->PROXIMO = l->INICIO;

    if(l->INICIO == NULL){
        l->FIM = novo;
    } else{
        l->INICIO->ANTERIOR = novo;
      }
        l->INICIO = novo;
        printf("\033[92m  INSIRIDO(início) COM SUCESSO  \033[0m\n");
}
void inserir_fim(ListaDupla *l, int id){

    if(l == NULL){
        return;
    }

    NO *novo = malloc(sizeof(NO));
    if(novo == NULL){
        return;
    }

    novo->DADO = id;
    novo->PROXIMO = NULL;
    novo->ANTERIOR = l->FIM;

    if(l->FIM == NULL){
        l->INICIO = novo;}
      else{
          l->FIM->PROXIMO = novo;
      }
    l->FIM = novo;
    printf("\033[92m  INSIRIDO(fim) COM SUCESSO  \033[0m\n");
}
int remover_item(ListaDupla *l, int id){
  if(l == NULL || l->INICIO == NULL){
     return 0;
  }

NO *aux = l->INICIO;
if(aux->DADO == id){
  if(aux->PROXIMO != NULL){
    l->INICIO = aux->PROXIMO;
    l->INICIO->ANTERIOR = NULL;
    free(aux);
    imprimir_frente(l);
    return 1;
  } else {
        l->INICIO = NULL;
        l->FIM = NULL;
        free(aux);
        imprimir_frente(l);
        return 1;
      }
} else {

  aux = l->FIM;
  if(aux->DADO == id){
      if(aux->ANTERIOR != NULL){
      l->FIM = aux->ANTERIOR;
      l->FIM->PROXIMO = NULL;
      free(aux);
      imprimir_frente(l);
      return 1;
    } else {
        l->INICIO = NULL;
        l->FIM = NULL;
        free(aux);
        imprimir_frente(l);
        return 1;
      }
  } else {

      while(aux != NULL && aux->DADO != id){
        aux = aux->ANTERIOR;

      }
      if(aux == NULL){
        return 0;
      }

      aux->PROXIMO->ANTERIOR = aux->ANTERIOR;
      aux->ANTERIOR->PROXIMO = aux->PROXIMO;
      free(aux);
      imprimir_frente(l);
      return 1;
    }
  }
}
void imprimir_frente(ListaDupla *l){
  if(l == NULL){
     return;
  }
  if(l->INICIO == NULL){
     printf("\033[31m  PLAYLIST VAZIA  \033[0m\n");
     return;
  }

  NO *aux = l->INICIO;

  printf("\n\n\n    ");
  while(aux->PROXIMO != NULL){
      printf(" | %d | ->",aux->DADO);
      aux = aux->PROXIMO;
  }
  printf(" | %d | ->",aux->DADO);
  printf(" NULL\n\n\n");
}
void imprimir_tras(ListaDupla *l){
  if(l == NULL){
     return;
  }
  if(l->FIM == NULL){
     printf("\033[31m  PLAYLIST VAZIA  \033[0m\n");
     return;
  }

NO *aux = l->FIM;

    printf("\n\n\n    ");
      while(aux->ANTERIOR != NULL){
         printf(" | %d | ->",aux->DADO);
         aux = aux->ANTERIOR;
      }
    printf(" | %d | ->",aux->DADO);
    printf(" NULL\n\n\n");
}


/**//**//**//**//**//**//**//**//**//**//**//**/
int lerInteiro(void) {
    int valor;
    while(scanf("%d", &valor) != 1) {
        while(getchar() != '\n');
        printf("\n\n\033[31m  DIGITE UM INTEIRO SEU ANIMAL!  \033[0m:  ");
    }

    while(getchar() != '\n');
    return valor;
}

void LIMPARTELA(void){
#ifdef _WIN32
 system("cls");
#else
 system("clear");
#endif
}
void MENSSAGEM(int x){
if(x == 1)
{
printf("\n\n\033[95m");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n");
printf("\033[95m");
printf("              O L Á ,   V A M O S   C O M E Ç A R ?         \n");
printf("\033[33m");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n\n\n");
printf("  DIGITE \033[93m[1]\033[33m PARA COMEÇAR OU OUTRO NÚMERO \033[93m[X]\033[33m PARA SAIR\033[0m:  ");
return;
}

else if(x == 2)
{
printf("\n\n\033[95m");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n");
printf("                V A M O S  L Á  E N T Ã O ! ! !             \n");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n\n\n");
return;
}
else if(x == 3)
{
printf("\n\n\033[95m");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n");
printf("             T C H A U ,  A T É  A  P R Ó X I M A ! ! !      \n");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n\n\n");
return;
}
else if(x == 4)
{
printf("\n\033[33m  O QUE DESEJA:\n\n");
printf("\033[95m  [1]ADICIONAR MÚSICA\n");
printf("\033[95m  [2]EXIBIR PLAYLIST\n");
printf("\033[95m  [3]EXIBIR HISTORICO DA PLAYLIST\n");
printf("\033[95m  [4]REMOVER MÚSICA\n");
printf("\033[95m  [5]SAIR\n\n");
printf("\033[33m  [REPOSTA]\033[0m:  ");
return;
}



}
/**//**//**//**//**//**//**//**//**//**//**//**/
