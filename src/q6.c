#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 1;
    do {
        printf("%d\n", num * i);
        i++;
    } while (i <= 10);

    return 0;
}
