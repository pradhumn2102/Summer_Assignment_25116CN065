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

        // Print characters
        for(j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}