#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);
    N = (N < 0) ? -N : N; // Handle negative numbers
    while (N != 0) {
        N /= 10;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
