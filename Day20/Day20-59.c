#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int rows;
    scanf("%d", &rows);
    
    int a[rows];
    
    for(int i = 0; i <= rows-1; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    int min = a[0];
    
    for(int i=0; i <= rows-1; ++i)
    {
        if( a[i] < min)
        {
            min = a[i];
        }
    }
    
    printf("%d", min);
    return 0;
}

// Arrays_Find the Minimum Element in an Array