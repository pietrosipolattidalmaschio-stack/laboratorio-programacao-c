//Ler uma palavra e apresentar somente seu primeiro caractere.
#include <stdio.h>

int main() {
    
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%49s", palavra);
    
    printf("%c\n", palavra[0]);
    
    return 0;
}