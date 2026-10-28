//Criar uma matriz 3×3, somar todos os seus elementos e apresentar o resultado.
#include <stdio.h>

int main() {
    
    int m[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um número: ");
            scanf("%d", &m[i][j]);
        }
    }
    
    int soma = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += m[i][j];
        }
    }
    printf("A soma de todos os elementos é: %d", soma);
    return 0;
}