#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i=1; i <= n; ++i)
    {
        if ( n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// Loops_Print All Factors of a Number