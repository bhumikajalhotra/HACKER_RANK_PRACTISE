#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);

    if ((a % 10) == (b % 10))
        printf("YES");
    else
        printf("NO");

    return 0;
}

// Check if Two Numbers Have Same Last Digit