#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[100];
    int matricula;
    int i;

    FILE *arquivo;

    arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("\nCadastro do funcionario %d\n", i + 1);

        printf("Digite o nome: ");
        scanf(" %99[^\n]", nome);

        printf("Digite a matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s | Matricula: %d\n",
                nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso no arquivo funcionarios.txt!\n");

    return 0;
}