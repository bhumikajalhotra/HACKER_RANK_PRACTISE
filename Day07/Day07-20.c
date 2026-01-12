#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num;
    scanf("%f", &num);

    int res = (int) num;   

    printf("Rounded Value = %d", res);

    return 0;
}

// Rounded Value - Remove Decimals