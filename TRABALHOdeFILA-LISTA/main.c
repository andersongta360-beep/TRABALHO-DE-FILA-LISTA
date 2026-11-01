#include "lista_dupla.h"


int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
LIMPARTELA();



OLA();
int comeco = lerInteiro();
if(comeco != 1){return -1;}
COMECAR();



ListaDupla *PLAYLIST = criar_lista();



int acao=0;
printf("\n");

do{
MENSSAGEM_ACAO();
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
        remover_item(PLAYLIST,id);
      }
  }
}while(acao != 5);


printf("\033[0m");
destruir_lista(PLAYLIST);
return 0;}
