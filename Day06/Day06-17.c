#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n, low, high;
    scanf("%lld %lld %lld", &n, &low, &high);

    if (n >= low && n <= high)
        printf("In Range");
    else
        printf("Out of Range");

    return 0;
}

// Range Check