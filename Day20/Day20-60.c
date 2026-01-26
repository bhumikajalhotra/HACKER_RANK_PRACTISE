#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int rows;
    scanf("%d", &rows);
    
    int a[rows];
    
    for (int i=0; i <= rows-1; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    
    for(int i=0; i <= rows-1; ++i)
    {
        if ( a[i] > max)
        max = a[i];
    }
    printf("%d", max);
    return 0;
}

// Arrays_Find the Maximum Element in an Array