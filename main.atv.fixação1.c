#include <stdio.h>

int main(void) {
    
    int numeros[2][3];
    int soma = 0;
    
    printf("Digite 6 números: ");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &numeros[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += numeros[i][j];
        }
    }
    printf("Soma de todos os números: %d\n", soma);
    
    return 0;
}