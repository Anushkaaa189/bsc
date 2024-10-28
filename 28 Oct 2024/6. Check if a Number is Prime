#include <stdio.h>

int main() {
    int N, isPrime = 1;
    scanf("%d", &N);
    if (N <= 1) isPrime = 0;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("%d\n", isPrime);
    return 0;
}
