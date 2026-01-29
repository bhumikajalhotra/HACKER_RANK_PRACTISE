#include <stdio.h>

int main() {

    int vault[10];
    int index, rotate;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vault[i]);
    }

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &index, &rotate);
        vault[index] = (vault[index] + rotate) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", vault[i]);
    }
    
    return 0;
}

// If-Else_Money Heist