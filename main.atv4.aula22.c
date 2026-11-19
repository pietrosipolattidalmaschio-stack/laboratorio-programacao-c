#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("====== VALORES ======\n");
    printf("Valor original: %d\n", numero);
    
    dobrar(&numero);
    
    printf("Valor dobrado: %d\n", numero);
    
    return 0;
}