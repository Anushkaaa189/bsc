#include <stdio.h>

int main() {
    int N, factorial = 1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    printf("%d\n", factorial);
    return 0;
}
