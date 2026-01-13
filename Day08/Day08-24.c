#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 1000000) {
        printf("Invalid Input!");
        return 0;
    }

    float bill = 0.0;

    if (n <= 100) {
        bill = n * 5.0;
    }
    else if (n <= 300) {
        bill = (100 * 5.0) + (n - 100) * 7.0;
    }
    else {
        bill = (100 * 5.0) + (200 * 7.0) + (n - 300) * 10.0;
    }

    if (bill <= 1200) {
        bill = bill - (bill * 0.10);
    }

    printf("The electricity bill is: %.2f.", bill);

    return 0;
}

// If-Else_Electricity Bill Calculator