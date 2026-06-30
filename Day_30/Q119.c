#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int count = 0, choice, i, id, found;

    do {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[count].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[count].name);

            printf("Enter Department: ");
            scanf(" %[^\n]", emp[count].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[count].salary);

            count++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if(count == 0) {
                printf("No Employee Records Found!\n");
            } else {
                printf("\n----- Employee Records -----\n");
                for(i = 0; i < count; i++) {
                    printf("\nEmployee ID : %d", emp[i].id);
                    printf("\nName        : %s", emp[i].name);
                    printf("\nDepartment  : %s", emp[i].department);
                    printf("\nSalary      : %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < count; i++) {
                if(emp[i].id == id) {
                    printf("\nEmployee Found!\n");
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Employee Not Found!\n");
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