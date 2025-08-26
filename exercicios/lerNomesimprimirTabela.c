#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "pt-br.UTF-8");

    /**
    *Foram digitadas três linhas, onde cada uma das linhas contém o nome e a nota de um aluno.
    *Escreva um programa que leia essas informações e monte uma tabela onde
    *a primeira coluna é o nome e a segunda coluna é a nota.
    */

    char *nomes;

    nomes = (char *) malloc(3 * 30 * sizeof(char)); // 3 nomes com até 30 caracteres cada
    float notas[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nomes + i * 30, 30, stdin);

        size_t len = strlen(nomes + i * 30);
        if (len > 0 && (nomes + i * 30)[len - 1] == '\n') {
            (nomes + i * 30)[len - 1] = '\0';
        }

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        getchar();
    }

    printf("\nTabela de Alunos\n");
    printf("--------------------\n");
    printf("%-15s Nota\n", "Nome");
    printf("--------------------\n");
    for (int i = 0; i < 3; i++) {
        printf("%-15s %.2f\n", nomes + i * 30, notas[i]);
    }

    free(nomes);

    return 0;
}