#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count += num % 2;  // Check if last bit is 1
        num /= 2;
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}