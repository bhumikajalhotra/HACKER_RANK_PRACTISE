#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    int flag = 0;
    
    scanf("%d", &n);
    
    if ( n <= 1)
    {
        printf("None");
    }
    else
    {
        for ( i = 2; i < n; ++i)
        {
            if ( n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if ( flag == 0)
            printf("Prime");
        else
            printf("Composite");
    }
    
    return 0;
}

// Loops_The Guardian of Prime Gate