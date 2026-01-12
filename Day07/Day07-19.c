#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N & 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}

// Bitwise_Even or Odd