#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int count = 0;
    
    for (int i=0; i < 4; ++i)
    {
        count += (n >> i) & 1;
    }
    printf("%d", count);
    return 0;
}

// Bitwise_Count Set Bits in an Integer