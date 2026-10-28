//Ler e exibir o nome completo de uma pessoa
#include <stdio.h>

int main(void) {
    
    char nome[80];
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("%s", nome);
    
    return 0;
}