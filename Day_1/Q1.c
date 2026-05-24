#include <stdio.h>

int main() {
    int N, sum = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &N);

    // Calculate sum
    for(int i = 1; i <= N; i++) {
        sum = sum + i;
    }

    // Display result
    printf("Sum of first %d natural numbers = %d", N, sum);

    return 0;
}