#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//  ALOCAÇÃO DE MEMÓRIA DINÂMICA //

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    int *p;
    p = (int *)malloc(sizeof(int));

    p[4] = 4;
    *(p+1) = 5;

    printf("-->%d\n", p[4]);
    printf("-->%d\n", *(p+1));

    char *Caractere;

    Caractere = (char *)malloc(sizeof(char));
    Caractere[0] = 'A';
    Caractere[1] = 'B';
    *(Caractere+2) = 'C';

    printf("-->%c\n", Caractere[0]);
    printf("-->%c\n", Caractere[1]);
    printf("-->%c\n", *(Caractere+2));
    free(Caractere);
    free(p);
    

    return 0;
}