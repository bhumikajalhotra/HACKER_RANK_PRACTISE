#include <stdio.h>

int isPerfectSquare(int n) {
    if (n < 0) return 0;
    for (int i = 0; i * i <= n; i++) {
        if (i * i == n)
            return 1;
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        printf("A");
        return 0;
    }

    int primes[] = {2, 3, 5, 7, 11};
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (N == primes[i] * primes[j] && N > 20) {
                printf("B");
                return 0;
            }
        }
    }

    int div3 = (N % 3 == 0);
    int div7 = (N % 7 == 0);
    if ((div3 ^ div7) && (N >= 10 && N <= 99)) {
        printf("C");
        return 0;
    }

    if (N < 200 && isPerfectSquare(N)) {
        printf("D");
        return 0;
    }

    printf("E");
    return 0;
}

// If-Else_Number Category