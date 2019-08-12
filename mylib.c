#include <stdio.h>
#include <stdlib.h>

void menuPrincipal( void ){
    system ("clear");
    printf("===== SIG-Recipes: CADERNO DE RECEITAS CULINÁRIAS =====\n\n");
    printf("1 - cadastrar receita\n");
    printf("2 - modificar receita\n");
    printf("3 - consultar receita\n");
    printf("4 - deletar receita\n");
    printf("5 - sobre\n");
}

void sobre( void ){
    printf("\n\nPrograma desenvolvido por:\n")
    printf("Annielly Ferreira de Sousa e Rayra Kelly Araújo dos Santos")
}