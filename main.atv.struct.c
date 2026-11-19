#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1;
    Funcionario funcionario2;
    printf("Digite seu nome: ");
    scanf("%19s", funcionario1.nome);
    printf("Digite sua idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Digite o seu salário: ");
    scanf("%f", &funcionario1.salario);
    
    printf("Digite seu nome: ");
    scanf("%19s", funcionario2.nome);
    printf("Digite sua idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Digite o seu salário: ");
    scanf("%f", &funcionario2.salario);
    
    printf("===== DADOS DOS FUNCIONÁRIOS =====\n");
    printf("%s\n", funcionario1.nome);
    printf("%d\n", funcionario1.idade);
    printf("%f\n", funcionario1.salario);
    printf("%s\n", funcionario2.nome);
    printf("%d\n", funcionario2.idade);
    printf("%f\n", funcionario2.salario);
    
    return 0;
}




