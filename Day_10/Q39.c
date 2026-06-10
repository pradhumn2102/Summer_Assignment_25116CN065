#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}