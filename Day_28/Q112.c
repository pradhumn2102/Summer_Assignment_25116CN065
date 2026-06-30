#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[100];
    int count = 0, choice, i;
    char search[50];

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", c[count].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[count].phone);

            printf("Enter Email: ");
            scanf("%s", c[count].email);

            count++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (count == 0) {
                printf("No Contacts Found!\n");
            } else {
                printf("\n----- Contact List -----\n");
                for (i = 0; i < count; i++) {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search);

            for (i = 0; i < count; i++) {
                if (strcmp(c[i].name, search) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);
                    break;
                }
            }

            if (i == count)
                printf("Contact Not Found!\n");

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