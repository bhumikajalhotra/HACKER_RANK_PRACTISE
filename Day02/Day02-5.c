#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int seconds( int h, int m, int s){
    return (h*3600) + (m*60) + s;
}


int main() {

    int hour, min, sec;
    scanf("%d %d %d", &hour, &min, &sec);
    int total = seconds( hour, min, sec);
    printf("Total seconds: %d", total);
    return 0;
}

// Time Conversion //