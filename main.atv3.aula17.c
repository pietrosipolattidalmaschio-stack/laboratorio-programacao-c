#include <stdio.h>
#include <string.h>

int main(void) {
    
    char aluno[15], codigo[3];
    char mensagem[50] = "Olá, ";
    printf("====== IDENTIFICAÇÃO ACADÊMICA ======\n");
    printf("Digite o seu primeiro nome: ");
    scanf("%14s", aluno);
    printf("Digite o código do seu curso (CC ou SI): ");
    scanf("%2s", codigo);
    
    printf("====== RESULTADO ======\n");
    printf("Estudante: %s\n", aluno);
    if (strcmp(codigo, "CC") == 0) {
        printf("Código do curso: CC\n");
    } else {
        printf("Código curso: SI\n");
    }
    printf("Caracteres do nome: %zu\n\n", strlen(aluno));
    
    strcat(mensagem, aluno);
    printf("%s!\n", mensagem);
    
    return 0;
}