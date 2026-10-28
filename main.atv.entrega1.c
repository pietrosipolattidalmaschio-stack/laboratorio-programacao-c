//Criar uma matriz 2×2 com valores definidos no código e exibi-la em formato de tabela.
#include <stdio.h>

int main() {
    
    int m[2][2] = {
        {10, 20},
        {30, 40}
    };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}