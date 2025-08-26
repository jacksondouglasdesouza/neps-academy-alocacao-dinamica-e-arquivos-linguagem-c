#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    int i, tamanho, *vetor;

    printf("Digite o tamanho para o vetor: \n");
    scanf("%d", &tamanho);
    srand(time(NULL));
    vetor = (int *) malloc(tamanho * sizeof(int));

    if(vetor){
        for(i = 0; i < tamanho; i++){
            *(vetor + i) = rand() % 100;
        }
        //--
        for(i = 0; i < tamanho; i++){
            printf("%d, ", *(vetor + i));
        }
        //--

        printf("\nDigite o tamanho do segundo vetor: \n");
        scanf("%d", &tamanho);
        vetor = (int *) realloc(vetor, tamanho * sizeof(int));

        for(i = 0; i < tamanho; i++){
            printf("%d, ", *(vetor + i));
        }

        free(vetor);

    } else {
        printf("Erro ao alocar memória.\n");
    }


    return 0;
}