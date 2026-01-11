#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float discounted(float price, float percent) {
    float discountAmount = (price * percent) / 100.0;
    float discountedPrice = price - discountAmount;
    return discountedPrice;
}

int main() {
    float price, percent;
    scanf("%f %f", &price, &percent);

    float res = discounted(price, percent);
    printf("The final price is: %f", res);

    return 0;
}

// Discounted Price Calculation