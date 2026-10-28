#include <stdio.h>

int main(void) {
    
    int notas[3][2];
    float media;
    
    for (int i = 0; i < 3; i++) {
        printf("Digite duas notas do aluno %d:\n", i + 1);
        
        for (int j = 0; j < 2; j++) {
            scanf("%d", &notas[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        media = 0;
        
        for (int j = 0; j < 2; j++) {
            media += notas[i][j];
        }
        media /= 2;
        printf("Aluno %d: %.2f de média\n", i + 1, media);
    }
    return 0;
}