#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a,b;
    long long gcd = 1;
    scanf("%lld %lld", &a, &b);
    
    if (a == 0)
    {
        gcd = b;
    }
    else if (b == 0)
    {
        gcd = a;
    }
    else
    {
        for (long long i=1; i <= a && i <= b; ++i)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
    }
    
    printf("%lld", gcd);
    
    return 0;
}

// Loops_The Twin Kingdoms’ Common Seal