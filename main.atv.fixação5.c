//Ler uma palavra e contar quantas vogais ela possui, considerando letras minúsculas.
#include <stdio.h>

int main(void) {
    
    char palavra[50];
    int vogais = 0;
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        vogais++;
    }
    printf("O nº de vogais nessa palavra é: %d", vogais);
    return 0;
}