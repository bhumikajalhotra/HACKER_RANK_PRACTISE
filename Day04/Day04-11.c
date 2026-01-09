#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    float halfValue = num / 2.0;   

    printf("Half of %d is %.2f", num, halfValue);

    return 0;
}

// Half the Number