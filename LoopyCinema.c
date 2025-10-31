#include <stdio.h> 
int main () {
    int seats[5][6] = {0}, row, column, choice, booked = 0, available = 30;
    printf("= = = = = =  WELCOME TO LoopyCinema BOOKING COUNTER = = = = = = \n");
    printf(". . . WE WILL HELP YOU TO MAKE YOUR BOOKING EASY AND FUN . . . \n");
    do {
    printf("> > > > > > > > > > > > > >  > MENU < < < < < < < < < < < < < < \n");
    printf("1. View seat layout. \n2.Book a seat. \n3. Cancel a booking. \n4.View a seat statistics. \n5. Exit.\n");
    printf("Enter your choice [1, 2, 3, 4, 5,] : ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("* * * * CURRENT SEAT LAYOUT * * * *\n");
        for (row = 0; row < 5; row++) {
            for (column = 0; column < 6; column++) {
                printf("%d, ", seats[row][column]);
            }
            printf("\n");
        }
        break;
        case 2: printf("* * * * BOOKING A SEAT * * * *\n");
        printf("I. Enter a row(1-5): ");
        scanf("%d", &row);
        printf("II. Enter a column : ");
        scanf("%d", &column);
        if (row <1 || row > 5 || column < 1 || column > 6) {
            printf("Invalid choice! kindly enter right seat choice.\n");
        } else if (seats[row-1][column-1] == 1) {
            printf("Seat is already booked! Kinldy re-book an unbooked seat.\n");
        } else {
            seats[row-1][column-1] = 1;
            printf("Booking confirmed succesfully!\n");
            available--;
            booked++;
        }
        break;
        case 3: printf("* * * * CANCELLING A BOOKING * * * *\n");
        printf("I. Enter row(1-5): ");
        scanf("%d", &row);
        printf("II. Enter column(1-6): ");
        scanf("%d", &column);
        if (row < 1 || column < 1 || row > 6 || column > 6) {
            printf("Invalid choice! Kinldy enter the right seat choice.\n");
        } else if (seats[row-1][column-1] == 0) {
            printf("Seat is now booked yet! Kindly re-check your choice.\n");
        } else {
            seats[row-1][column-1] = 0;
            printf("Your cancellation has been done succesfully!\n");
            available++;
            booked--;
        }
        break;
        case 4: printf("* * * * TOTAL SEAT STATISTICS * * * *\n");
        printf("I. Booked : %d", booked);
        printf("II. Avaiable : %d", available);
        break;
        case 5: printf("* * * *  EXIT * * * *\n");
        printf("Thankyou for using LoopyCinema");
        break;
        default: printf("Wrong choice! Kindly enter 1/2/3/4/5\n");
        }
        }while (choice!= 5);
    return 0;
}
