#include <stdio.h>

int main() {

    int a,b,c;
    int type = 0;
    
    scanf("%d %d %d" , &a, &b, &c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    
    if (a + b > c && a + c > b && b + c > a){
        
        if ( a == b && b == c)
            type=1;
        else if ( a == b || b == c || a == c)
            type=2;
        else
            type=3;
    }
    else {
        type=4;
    }
    
    switch (type){
        case 1:
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
            break;
            
        case 2:
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
            break;
            
        case 3:
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
            break;
            
        case 4:
            printf("Type: Invalid\n");
            printf("Cannot form a valid shape.");
            break;
    }
    
    return 0;
}

// If-Else_Three Sticks