#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  ALOCAÇÃO DE MEMÓRIA DINÂMICA COM CALLOC //

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    // malloc(sizeof(int)) --> Aloca memória para 1 inteiro
    // calloc(1, sizeof(int)) --> Aloca memória para 1 inteiro e inicializa com 0

    int *ponteiro01, *ponteiro02;

    ponteiro01 = (int *) calloc(5, sizeof(int)); // Aloca memória para 5 inteiros e inicializa com 0
    ponteiro02 = (int *) malloc(5 * sizeof(int)); // Aloca memória para 5 inteiros

    printf("Calores --> %d, %d, %d, %d, %d\n", ponteiro01, ponteiro01+1, ponteiro01+2, ponteiro01+3, ponteiro01+4); // Imprime 0
    
    printf("-----------------------------------\n");

    printf("Mallocs --> %d, %d, %d, %d, %d\n", ponteiro02[0], ponteiro02[1], ponteiro02[2], ponteiro02[3], ponteiro02[4]); // Imprime lixo
    

    free(ponteiro01);
    free(ponteiro02);

    return 0;
}