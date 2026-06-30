#include <stdio.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n, i, choice, searchRoll, found;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            for(i = 0; i < n; i++) {
                printf("\nEnter Details of Student %d\n", i + 1);

                printf("Roll Number: ");
                scanf("%d", &roll[i]);

                printf("Name: ");
                scanf(" %[^\n]", name[i]);

                printf("Marks: ");
                scanf("%d", &marks[i]);
            }
            printf("Student Records Added Successfully!\n");
            break;

        case 2:
            printf("\n----- Student Records -----\n");
            for(i = 0; i < n; i++) {
                printf("\nRoll Number : %d", roll[i]);
                printf("\nName        : %s", name[i]);
                printf("\nMarks       : %d\n", marks[i]);
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &searchRoll);

            found = 0;
            for(i = 0; i < n; i++) {
                if(roll[i] == searchRoll) {
                    printf("\nStudent Found!\n");
                    printf("Roll Number : %d\n", roll[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Marks       : %d\n", marks[i]);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Student Not Found!\n");
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}