#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    printf("%d", n);
    
    for( ; n != 1; )
    {
        if ( n%2 == 0)
        {
            n = n/2;
        }
        else 
        {
            n = 3*n+1;
        }
        printf(" -> %d", n);
    }
    printf("\n");
    return 0;
}

// Loops_Collatz Sequence