#include <stdio.h>

int main() {
    int n;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        int i = 2;
        while (i * i <= n) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
