#include <stdio.h>

int main() {

    int n,a,d;
    scanf("%d", &n);
    scanf("%d %d", &a, &d);
    
    for (int i=0; i<=n-1; i++)
    {
        printf("%d ", a+(i*d));
    }
    return 0;
}

// Loops_Arithmetic Progression