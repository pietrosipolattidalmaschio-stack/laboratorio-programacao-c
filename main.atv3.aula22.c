#include <stdio.h>

int main(void) {
    int numero = 15;
    int *p;
    p = &numero;
    
    printf("========== DADOS ==========\n");
    printf("Número antes da alteração: %d\n", numero);
    
    *p = 50;
    printf("Número após a alteração: %d\n", *p);
    
    return 0;
}
