#include <stdio.h>

int main() {

    int row;
    scanf("%d", &row);
    
    int a[row];
    
    for (int i=0; i <= row-1; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    int min = a[0];
    int max = a[0];
    
    for (int i=0; i <= row-1; ++i)
    {
        if(a[i] < min )
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    
    printf("%d %d", max, min);
    
    return 0;
}

// Arrays_Find Max and Min