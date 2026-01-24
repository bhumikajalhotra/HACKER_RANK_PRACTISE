#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    n = n & (n-1);
    printf("%d", n);
    return 0;
}

// Bitwise_Unset Rightmost Bit