#include <stdio.h>
int main() {
    int matriz[3][3];
    int soma = 0;
    printf("Digite 9 números: \n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] % 2 == 0) {
                soma += matriz[i][j];
            }
        }
    }
    printf("A soma dos pares é: %d", soma);
    
    return 0;
}