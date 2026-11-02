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
        printf("\n\n\033[31m[--DIGITE UM INTEIRO SEU ANIMAL--]\033[0m:  ");
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
printf("\033[32m");
printf("                                                            \n");
printf("                                                            \n");
printf("                                                            \n\n\n");
printf("  DIGITE \033[92m[1]\033[32m PARA COMEÇAR OU OUTRO NÚMERO \033[92m[X]\033[32m PARA SAIR\033[0m:  ");
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
printf("\n\033[32m  O QUE DESEJA:\n\n");
printf("\033[92m  [1]ADICIONAR MÚSICA\n");
printf("\033[92m  [2]EXIBIR PLAYLIST\n");
printf("\033[92m  [3]EXIBIR HISTORICO DA PLAYLIST\n");
printf("\033[92m  [4]REMOVER MUSICA\n");
printf("\033[92m  [5]SAIR\n\n");
printf("\033[32m  [REPOSTA]\033[0m:  ");
return;
}



}
/**//**//**//**//**//**//**//**//**//**//**//**/
