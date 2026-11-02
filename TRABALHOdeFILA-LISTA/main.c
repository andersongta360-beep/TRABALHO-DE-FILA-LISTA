#include "lista_dupla.h"


int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
LIMPARTELA();
MENSSAGEM(1);
int comeco = lerInteiro();
if(comeco != 1){LIMPARTELA();MENSSAGEM(3);printf("\033[0m");return -1;}
MENSSAGEM(2);


ListaDupla *PLAYLIST = criar_lista();
if(PLAYLIST == NULL){printf("ERRO DE ALOCAÇÃO NO INÍCIO");return-1;}


int acao=0;
printf("\n");
do{
MENSSAGEM(4);
acao = lerInteiro();
  if(acao > 5 || acao <= 0){
        printf("\n\n\033[31m[--AÇÃO INEXISTENTE--]\033[0m\n\n");
  }else{
      if(acao == 1)
      {
        printf("\n\n\033[32m[DIGITE O ID DA MÚSICA QUE QUER ADICIONAR]\033[0m:  ");
        int id = lerInteiro();
        inserir_fim(PLAYLIST,id);
      }
      else if(acao == 2)
      {
        imprimir_frente(PLAYLIST);
      }
      else if(acao == 3)
      {
        imprimir_tras(PLAYLIST);
      }
      else if(acao == 4)
      {
        printf("\n\n\033[32m[DIGITE O ID DA MÚSICA QUE QUER RETIRAR]\033[0m:  ");
        int id = lerInteiro();
        int resultado = remover_item(PLAYLIST,id);
          if(resultado == 1){printf("\n\n\033[92mMÚSICA RETIRADA COM SUCESSO\033[0m\n\n");}
            else if(resultado == 0){printf("\n\n\033[31mERRO AO RETIRAR MÚSICA\033[0m\n\n");}
      }
  }
}while(acao != 5);


LIMPARTELA();MENSSAGEM(3);printf("\033[0m");
destruir_lista(PLAYLIST);
return 0;}
