#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 50) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
