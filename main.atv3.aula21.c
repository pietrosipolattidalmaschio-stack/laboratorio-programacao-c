
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    Funcionario funcionario;
    FILE *arquivo;
    int opcao;
    int quantidade;
    int i;

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Visualizar funcionarios\n");
        printf("0 - Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\nQuantos funcionarios deseja cadastrar (maximo 5)? ");
                scanf("%d", &quantidade);

                if (quantidade < 1 || quantidade > 5) {
                    printf("\nQuantidade invalida! Digite de 1 a 5.\n");
                    break;
                }

                arquivo = fopen("funcionarios.txt", "a");

                if (arquivo == NULL) {
                    printf("\nErro ao abrir o arquivo!\n");
                    break;
                }

                for (i = 0; i < quantidade; i++) {
                    printf("\nCadastro do funcionario %d\n", i + 1);

                    printf("Nome: ");
                    scanf(" %49[^\n]", funcionario.nome);

                    printf("Salario: ");
                    scanf("%f", &funcionario.salario);

                    printf("Horas extras: ");
                    scanf("%d", &funcionario.horasExtras);

                    fprintf(arquivo, "%s;%.2f;%d\n",
                            funcionario.nome,
                            funcionario.salario,
                            funcionario.horasExtras);
                }

                fclose(arquivo);

                printf("\nFuncionarios cadastrados com sucesso!\n");
                break;

            case 2:
                arquivo = fopen("funcionarios.txt", "r");

                if (arquivo == NULL) {
                    printf("\nNenhum funcionario cadastrado!\n");
                    break;
                }

                printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

                while (fscanf(arquivo, " %49[^;];%f;%d\n",
                              funcionario.nome,
                              &funcionario.salario,
                              &funcionario.horasExtras) == 3) {

                    printf("\nNome: %s\n", funcionario.nome);
                    printf("Salario: R$ %.2f\n", funcionario.salario);
                    printf("Horas extras: %d\n", funcionario.horasExtras);
                }

                fclose(arquivo);

                printf("\n====================================\n");
                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
