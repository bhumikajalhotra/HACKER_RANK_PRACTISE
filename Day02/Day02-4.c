#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int distance( char c1, char c2 ){
    return c2 - c1;
}

int main() {

    char a, b;
    scanf("%c %c" ,&a ,&b );
    int res = distance( a,b );
    printf("The distance between %c and %c is %d" , a, b, res);
    
    
    return 0;
}

// Character Distance //

