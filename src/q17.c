#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Countdown:\n");
    for (int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
