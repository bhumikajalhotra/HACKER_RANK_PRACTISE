#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length, int width){
    return length*width;
}

int main() {

    int l, w;
    scanf("%d %d", &l, &w);
    int res = area(l, w);
    printf("The area is: %d units", res);
    return 0;
}

// Area of a rectangle