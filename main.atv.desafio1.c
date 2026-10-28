#include <stdio.h>

int main(void) {
    
    char palavra[100];
    int contador = 0;
    
    printf("Digite um texto: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    for (int i = 0; palavra[i] != '\0'; i++) {
        contador += (palavra[i] != '\n' && palavra[i] != ' ');
    }
    printf("O número de letras digitadas é: %d\n", contador);
    return 0;
}