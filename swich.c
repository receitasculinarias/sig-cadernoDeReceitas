#include <stdio.h>
#include <stdlib.h>


int main( void ){
    system ("clear");

  int opcao;

    printf("===== SIG-Recipes: CADERNO DE RECEITAS CULINÁRIAS =====\n\n");
    printf("1 - cadastrar receita\n");
    printf("2 - modificar receita\n");
    printf("3 - Pesquisar receita\n");
    printf("4 - deletar receita\n");
    printf("5 - sobre\n");
    printf("6 - Sair\n");

    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    switch(opcao){
    int opc;
      case 1:

        printf("\n===== MENU CADASTRAR RECEITAS =====\n\n");
        printf("1 - Paes/Bolos/Tortas\n");
        printf("2 -Frangos/Carnes/Peixes\n");
        printf("3 - Sobremesas\n");
        printf("4 - Massas\n");
        printf("5 - Salgados\n");
        printf("6 - Sair\n");
        printf("Escolha uma das opcoes acima: ");
        scanf("%d", &opc);

      system ("clear");

    }
}

void sobre( void ){
    printf("\n\nPrograma desenvolvido por:\n");
    printf("Annielly Ferreira de Sousa e Rayra Kelly Araújo dos Santos");
}
