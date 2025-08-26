#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    int *ponteiro;
    int inteiro;

    ponteiro = (int *)malloc(sizeof(int) * 5);
    if(ponteiro == NULL){
        printf("Erro de alocação de memória!\n");
        exit(1);
    } else {
        printf("Alocação de memória bem-sucedida!\n");
        printf("Endereço do ponteiro: %u\n", (void *)ponteiro);
    
    }
    ponteiro = (int *)realloc(ponteiro, sizeof(int) * 10);

    if(ponteiro == NULL){
        printf("Erro de realocação de memória!\n");
        exit(1);
    } else {
        printf("Realocação de memória bem-sucedida!\n");
        printf("Endereço do ponteiro: %u\n", (void *)ponteiro);
        
    }

    ponteiro = (int *) realloc(ponteiro, sizeof(int) * 2);

    if(ponteiro == NULL){
        printf("Erro de realocação de memória!\n");
        exit(1);
    } else {
        printf("Realocação de memória bem-sucedida!\n");
        printf("Endereço do ponteiro: %u\n", (void *)ponteiro);
        
    }

    free(ponteiro);

    return 0;
    
}