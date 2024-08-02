#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int com, my_num, i;
    char play_again;

    do {
        srand(time(NULL));
        com = rand() % 10 + 1;
        i = 0;

        printf("Welcome to the Number Guessing Game!\n");
        printf("I have chosen a number between 1 and 10. Can you guess it?\n");

        while (i < 4) {
            printf("\nAttempt %d of 4: Guess the number (1 to 10): ", i + 1);

            
            if (scanf("%d", &my_num) != 1 || my_num < 1 || my_num > 10) {
                printf("Invalid input! Please enter a number between 1 and 10.\n");
                clear_input_buffer(); // Clear the invalid input
                continue;
            }

            if (com < my_num) {
                printf("The secret number is lower.\n");
            } else if (com > my_num) {
                printf("The secret number is higher.\n");
            } else {
                printf("Congratulations: you guessed the number in %d attempts!\n", i + 1);
                break;
            }
            i++;
        }

        if (i == 4) {
            printf("\nYou Lose! The secret number was %d.\n", com);
        }

        printf("\nDo you want to play again? (y/n): ");
        clear_input_buffer(); // Clear any leftover input
        play_again = getchar();

    } while (play_again == 'y' || play_again == 'Y');

    printf("Thank you for playing! Goodbye!\n");

    return 0;
}
// COde By Puroo Kulshrestha
