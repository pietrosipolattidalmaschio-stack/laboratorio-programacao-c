#include <stdio.h>

int main(void) {
    int idade;
    int *ponteiro;
    ponteiro = &idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("===== DADOS DO PONTEIRO =====\n");
    printf("Idade digitada: %d\n", idade);
    printf("Endereço da idade: %p\n", (void *)&idade);
    
    return 0;
}