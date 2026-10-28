#include <stdio.h>

int main() {
    int matriz[3][3];
    printf("Digite 9 números para a matriz: ");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int maior = matriz[0][0];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    printf("O maior valor é: %d", maior);
    return 0;
}