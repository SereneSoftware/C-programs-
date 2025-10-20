# include <stdio.h> 
int main () {
    int itemsno, i;
    float total = 0, price, discount, finaltotal;
    char choice;
    do {
        total = 0;
        printf("========== WELCOME TO LoopyMart BILLING SYSTEM ==========\n");
        printf("Enter the number of items you have purchased today!! : ");
        scanf("%d", &itemsno);
        for (i = 1; i <= itemsno; i++) {
            printf("Enter price of item %d : Rs. ", i);
            scanf("%f", &price);
            total = total + price;
        }
        printf("Total amount before discount : Rs. %.2f\n", total);
        discount = total * 0.1;
        finaltotal = total - discount;
        if (total > 1000) {
            printf("***** CONGRATULATION!! DISCOUNT OF 10 PERCENT  TO YOUR TOTAL!! *****\n ");
         printf("------------- TOTAL BILL SUMMARY ------------\n");
        printf("1. No of items purchased : %d\n", itemsno);
        printf("2. Total amount before discount : Rs. %.2lf\n", total);
        printf("3. Total amount after applying didcount : Rs. %.2lf\n", finaltotal);
        printf("========= THANKYOU FOR SHOPPING AT LoopyMart ========\n");
        printf("************ WE HOPE YOU HAD A GREAT TIME ************\n");
        printf("[DO YOU WANT TO CALCULATE ANOTHER BILL? (Y/N) : ");
        } else {
            printf("SORRY, NO DISCOUNT COULD BE APPLIED!\n");
            printf("------------- TOTAL BILL SUMMARY ------------\n");
        printf("1. No of items purchased : %d\n", itemsno);
        printf("2. Total amount : Rs. %.2lf\n", total);
        printf("========= THANKYOU FOR SHOPPING AT LoopyMart ========\n");
        printf("************ WE HOPE YOU HAD A GREAT TIME ************\n");
        }
        printf("********** DO YOU WANT TO CREATE A BILL AGAIN? ********** \n Enter (y/n) : ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
        printf("*************** HAVE A GREAT DAY AHEAD **************\n");
        return 0;
}
