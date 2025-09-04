#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("Factorial of %d = %lld\n", n, factorial);
    return 0;
}
