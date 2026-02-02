#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    int n500 = 0;
    int n200 = 0;
    int n100 = 0;
    
    scanf("%d", &a);
    
    if (a <= 0)
    {
        printf("Invalid amount\n");
    }
    else
    {
        if (a >= 500)
        {
            n500 = a/500;
            a = a % 500;
        }
        
        
        if (a >= 200)
        {
            n200 = a/200;
            a = a % 200;
        }
        
        
        if(a >= 100)
        {
            n100 = a/100;
        }
        
        printf("500-rupee notes: %d\n", n500);
        printf("200-rupee notes: %d\n", n200);
        printf("100-rupee notes: %d\n", n100);
        
    }
    
    
    return 0;
}

// Loops_Smart ATM Note Dispensing Machine