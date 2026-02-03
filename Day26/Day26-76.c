#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int product = 1;
    int sum = 0;
    int digit;
    
    scanf("%d", &n);
    
    for( ; n > 0 ; n = n/10)
    {
        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
    }
    
    printf("%d\n", product - sum);
    
    return 0;
}

// Loops_Subtract the Product and Sum of Digits of an Integer