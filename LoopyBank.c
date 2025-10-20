# include <stdio.h>
int main() {
    int pin = 1377, balance, choice, amount, userpin;
    char again;
    printf("========== WELCOME TO LoopyBank ATM MACHINE ==========\n");
    printf("------ We intend to make your transactions easier and faster!-----\n");
    printf("Please enter the 4-DIGIT UserPin to continue : ");
    scanf("%d", &userpin);
    if (userpin != pin) {
    printf("INCORRECT PIN! ACCESS DENIED.\n");
    return 0;
    }
    printf("PIN ENTERED SUCCESFULLY!! Access granted.\n");
    printf("Enter your account balance to verify your account details: ");
    scanf("%d", &balance);
    printf("Balance Entered = Rs. %d\n", balance);
    do {
        printf("********** ATM MENU **********\n");
        printf("--1. Check balance--\n");
        printf("--2. Deposit Amount--\n");
        printf("--3. Withdraw Amount--\n");
        printf("--4. EXIT--\n");
        printf("(KINDLY ENTER YOUR CHOICE [1/2/3/4]) : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
            printf("The balance in your account : Rs. %d\n", balance);
            break;
            case 2: 
            printf("Balance before transaction: Rs. %d\n", balance);
            printf("Kindly enter the amount you want to deposit : ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("!!! AMOUNT DEPOSITED SUCCESFULLY!!!\n");
            printf("Balance after transaction : rs %d\n", balance);
            break;
            case 3:
            printf("Balance before transaction : Rs. %d\n", balance);
            printf("Kindly enter the amount you want to withdraw : ");
            scanf("%d", &amount);
            if (amount < 0) {
                printf ("!! INVALID CHOICE, KINDLY ENTER A POSITIVE VALUE !!!\n");
            } else if (amount > balance) {
                printf("!!! INSUFFICIENT BALANCE TO MAKE THE TRANSACTION!!!\n");
            } else {
                balance = balance - amount;
                printf("!!! AMOUNT WITHDRAWN SUCCESFULLY, KINDLY COLLECT IT!!!\n");
                printf("Balance after transaction : Rs. %d\n", balance);
            }
            break;
            case 4:
            printf("---------- THANKYOU FOR VISITING LoopyBank ATM ----------\n");
            printf("Do you want to perform another transaction? (Y/N) : ");
            scanf(" %c", &again);
            if (again == 'y' || again == 'Y') {
                printf("........ RESTARTING ATM, PLEASE WAIT ........\n");
                continue;
            } else {
                printf("*/*/*/*/* HOPING YOU HAD A HAPPY TRANSACTION */*/*/*/*\n");
            }
                return 0;
            break;
            
            default: 
            printf("!!!! INVALID CHOICE, KINDLY ENTER [1/2/3/4] !!!!\n");
            }
            } while (1);
            return 0;
    }
