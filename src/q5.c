#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    long long factorial = 1;
    int i = 1;

    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("%lld\n", factorial);
    return 0;
}
