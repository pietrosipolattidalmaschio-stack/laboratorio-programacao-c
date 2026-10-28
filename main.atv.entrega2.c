//Ler quatro valores digitados pelo usuário, armazená-los em uma matriz 2×2 e exibir a matriz.
#include <stdio.h>

int main() {
    
    int m[2][2];
    printf("Digite 4 números: ");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}