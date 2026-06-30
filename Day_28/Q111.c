#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t;
    int choice;
    int availableSeats = 50;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Booking Details\n");
        printf("3. Cancel Ticket\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            if (availableSeats == 0) {
                printf("No seats available!\n");
                break;
            }

            printf("Enter Ticket Number: ");
            scanf("%d", &t.ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t.name);

            printf("Enter Number of Seats: ");
            scanf("%d", &t.seats);

            if (t.seats <= availableSeats) {
                availableSeats -= t.seats;
                printf("Ticket Booked Successfully!\n");
            } else {
                printf("Only %d seats are available!\n", availableSeats);
            }
            break;

        case 2:
            printf("\nBooking Details\n");
            printf("Ticket Number : %d\n", t.ticketNo);
            printf("Passenger Name: %s\n", t.name);
            printf("Booked Seats  : %d\n", t.seats);
            break;

        case 3:
            availableSeats += t.seats;
            t.ticketNo = 0;
            t.seats = 0;
            printf("Ticket Cancelled Successfully!\n");
            break;

        case 4:
            printf("Available Seats: %d\n", availableSeats);
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