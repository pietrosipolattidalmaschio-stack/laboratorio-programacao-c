#include <stdio.h>
int main(void) {
    int numero = 20;
    int *ponteiro;
    ponteiro = &numero;
    
    printf("Valor do número: %d\n", numero);
    printf("Endereco do número: %p\n", (void *)&numero);
    printf("Endereco armazenado no ponteiro: %p\n", (void *)ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);
    return 0;
}
