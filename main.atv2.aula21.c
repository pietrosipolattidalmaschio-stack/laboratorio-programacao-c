
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5];
    int i;
    int numero;

    FILE *arquivo;

    printf("Digite 5 numeros inteiros:\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }

    fclose(arquivo);

    printf("\nNumeros gravados com sucesso!\n");

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\n===== NUMEROS ARMAZENADOS =====\n");

    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    printf("================================\n");

    return 0;
}
