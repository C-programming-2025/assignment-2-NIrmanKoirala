#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n< 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        do {
            fact *= i;
            i++;
        } while (i <= n);

        printf("Factorial of %d is %d\n", n, fact);
    }

    return 0;
}