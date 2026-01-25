#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    
    int k = (a-b) >> 31;
    int min = (a & k) | (b & ~k);
    
    printf("%d", min);
    return 0;
}

// Bitwise_Minimum Without Comparison Operators