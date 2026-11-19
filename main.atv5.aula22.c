#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;
    
    for (int i = 0; i < 5; i++) {
        printf("%dº número: %d\n", i + 1, *(p + i));
    }
    return 0;
}