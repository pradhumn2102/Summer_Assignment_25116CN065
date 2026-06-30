#include <stdio.h>
#include <string.h>

int roll[100], marks[100], count = 0;
char name[100][50];

void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;
    printf("Student Added Successfully!\n");
}

void displayStudents() {
    int i;

    if (count == 0) {
        printf("No Student Records Found!\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    for (i = 0; i < count; i++) {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %d\n", marks[i]);
    }
}

void searchStudent() {
    int i, r;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}