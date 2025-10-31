#include <stdio.h> 
int main () {
   int A[3][3], B[3][3], C[3][3];
    int i, j, choice;
    char secondchoice;
    printf("= = = = = = = = = WELCOME TO LoopyMatrix ANALYZER = = = = = = = =\n");
    printf("* * * WE WILL HELP YOU TO PERFORM MATRIX OPERATIONS EASILY * * * *\n");
    printf("-> Enter the elements of the first Matrix A(3*3) : \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d] ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("-> Enter the elements of the second Matrix B(3*3) : \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d] ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    do {
    printf("Now Let us choose what matrix operation is to be performed on the Matrix: \n");
    printf("1. View both Matrices \n2. Addition \n3. Substraction \n4. Transpose of Matrices \n5. Exit\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("- - VIEW BOTH MATRICES - -\n");
        printf("I. Matrix A:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
        printf("II. Matrix B: \n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }
        break;
        case 2: printf("2. Addition of 2 Matrices : \n");
        printf("C = A + B\n");
        printf("A + B = \n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
        break;
        case 3: printf("3. Substraction of 2 Matrices : \n");
        printf("C = A - B\n");
        printf("A - B = \n");
        for (i = 0; i <3; i++) {
            for (j = 0; j < 3; j++) {
                C[i][j] = A[i][j] - B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
        break;
        case 4: printf("4. Transpose of a Matrix : \n");
        printf("Choose a Matrix to be Transposed (A/B) : ");
        scanf(" %c", &secondchoice);
         if (secondchoice == 'A' || secondchoice == 'a') {
             printf("Transpose of A: \n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
         }
         if (secondchoice == 'B' || secondchoice == 'b') {
            printf("Transpose of B: \n");
             for (i = 0; i < 3; i++) {
                 for (j = 0; j < 3; j++) {
                     printf("%d ", B[j][i]);
             }
             printf("\n");
         }
      }
      break;
      case 5: printf("5. Exit");
      printf(". . . THANKYOU FOR USING LoopyMatrix ANALYZER! WE HOPE YOU HAD A GREAT TIME . . .\n");
      break;
      default: printf("Invalid choice !! Kindly enter 1, 2, 3, 4, 5.\n");
    }
            } while (choice != 5);
    return 0;
}
