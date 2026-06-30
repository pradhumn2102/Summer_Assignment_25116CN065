#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    scanf(" %[^\n]", str1);

    do {
        printf("\n===== Menu-Driven String Operations =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Length of String = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String = %s\n", str2);
            break;

        case 3:
            printf("Enter Second String: ");
            scanf(" %[^\n]", str2);
            strcat(str1, str2);
            printf("Concatenated String = %s\n", str1);
            break;

        case 4:
            printf("Enter Second String: ");
            scanf(" %[^\n]", str2);

            if(strcmp(str1, str2) == 0)
                printf("Strings are Equal\n");
            else
                printf("Strings are Not Equal\n");
            break;

        case 5:
            strcpy(str2, str1);
            strrev(str2);
            printf("Reversed String = %s\n", str2);
            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}