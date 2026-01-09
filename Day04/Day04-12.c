#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d) {
    int num = a*1000 + b*100 + c*10 + d;
    return num * 5;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = buildNumber(a, b, c, d);
    printf("The number is: %d", result);

    return 0;
}

// 5th Multiple of Joined Number