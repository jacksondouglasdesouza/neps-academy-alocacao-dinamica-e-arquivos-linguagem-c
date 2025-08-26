#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  ALOCAÇÃO DE MEMÓRIA DINÂMICA COM CALLOC //

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    // malloc(sizeof(int)) --> Aloca memória para 1 inteiro
    // calloc(1, sizeof(int)) --> Aloca memória para 1 inteiro e inicializa com 0
    int *x;
    x = calloc(1, sizeof(int));

    if(x != NULL){
        printf("Alocação de memória realizada com sucesso!\n");
        printf("Valor de x agora antes da atribuição: %d\n", *x);
        *x = 10;
        printf("Valor de x agora é: %d\n", *x);
    } else {
        printf("Erro na alocação de memória!\n");
    }

    printf("--------------\n");

    char *y;
    y = calloc(1, sizeof(char));

    if(y != NULL){
        printf("Alocação de memória para char realizada com sucesso!\n");
        printf("Valor de y agora antes da atribuição: [ %c ]\n", *y);
        *y = 'A';
        printf("Valor de y agora é: %c\n", *y);
    } else {
        printf("Erro na alocação de memória!\n");
    }

    free(x);
    return 0;
}