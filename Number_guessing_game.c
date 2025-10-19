#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the infamous\n");
    printf("====== NUMBER GUESSING GAME ======\n");
    printf("Let us see where your intuition takes you!\n");

    do {
        printf("ENTER YOUR GUESS: ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("HIGHER!!!!\n");
        } else if (guess > number) {
            printf("LOWER!!!!\n");
        } else {
            printf("WOW! YOU HAVE DONE IT!\nThe number was %d!!\n", number);
        }

    } while (guess != number);

    return 0;
}