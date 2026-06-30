#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int count = 0, choice, i, id, found;

    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[count].id);

            printf("Enter Item Name: ");
            scanf(" %[^\n]", item[count].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[count].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[count].price);

            count++;
            printf("Item Added Successfully!\n");
            break;

        case 2:
            if(count == 0) {
                printf("No Items Available!\n");
            } else {
                printf("\n----- Item List -----\n");
                for(i = 0; i < count; i++) {
                    printf("\nItem ID   : %d", item[i].id);
                    printf("\nName      : %s", item[i].name);
                    printf("\nQuantity  : %d", item[i].quantity);
                    printf("\nPrice     : %.2f\n", item[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Item ID to Search: ");
            scanf("%d", &id);
            found = 0;

            for(i = 0; i < count; i++) {
                if(item[i].id == id) {
                    printf("\nItem Found!\n");
                    printf("ID       : %d\n", item[i].id);
                    printf("Name     : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price    : %.2f\n", item[i].price);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Item Not Found!\n");
            break;

        case 4:
            printf("Enter Item ID: ");
            scanf("%d", &id);
            found = 0;

            for(i = 0; i < count; i++) {
                if(item[i].id == id) {
                    printf("Enter New Quantity: ");
                    scanf("%d", &item[i].quantity);
                    printf("Quantity Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Item Not Found!\n");
            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}