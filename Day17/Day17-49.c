#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    if(n <= 0)
    {
        return 0;
    }
    
    int num = 1;
    printf("<");
    
    for (int i=1; i <= n; ++i)
    {
        printf("%d", num);
        if (i < n)
        {
            printf(" ");
        }
        num = num * 2;
    }
    printf(">");
    return 0;
}

// Loops_Double the Previous Term