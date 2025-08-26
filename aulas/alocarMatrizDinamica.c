#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>


int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    int **matriz;

    matriz = (int **)malloc(4 * sizeof(int**));

    for(int i = 0; i < 4; i++){
        matriz[i] = (int *)malloc(3 * sizeof(int));
        srand(time(NULL));
    }

    for(int i = 0; i < 4; i++){
        for(int j =0; j < 3; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}