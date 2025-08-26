#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//  ALOCAÇÃO DE MEMÓRIA DINÂMICA //

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");
    
    int *x;

    x = malloc(sizeof(int));

    if(x != NULL){
        printf("Alocação de memória realizada com sucesso!\n");
        printf("Valor de x agora antes da atribuição: %d\n", *x);
        *x = 10;
        printf("Valor de x agora é: %d\n", *x);
    } else {
        printf("Erro na alocação de memória!\n");
    }

    free(x);
    return 0;
}