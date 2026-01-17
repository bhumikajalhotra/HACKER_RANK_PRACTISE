#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    
    if ( (num & 3) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

// Bitwise_Check for Multiple of 4