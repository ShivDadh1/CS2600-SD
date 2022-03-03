// Interactive program allows user to guess 1 to 10
// Create menu with options: Press 1 to play game, Press 2 to change max number, Press 3 to quit
// Option 1 prompts user to enter number, if correct tell them they won and return to main menu
// If incorrect say too high or too low and allow them to guess until they win
// If they enter 'q' instead of number then game should quit but not program and return to menu.
// If Option 2 chosen, tell max value that they can set the number (no negatives or above max value)
// If Option 3: 1) Thank use for playing 2) print result of games played and number of guesses to win 3) End Game

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    int a = 10;
    char menuChoice;
    int numberToGuess;
    char userGuess;
    char q;
    int userTotalGuess;
    int userTotalGamesPlayed;
    printf("Number Guessing Game!!!!!\n");
    srand(time(NULL));
    for(;;)
    {
        printf("\nMenu:");
        printf("\nPress 1 to play a game \nPress 2 to change max number \nPress 3 to quit\n");
        scanf("%c", &menuChoice);

        if (menuChoice == '1')
        {
            userTotalGuess = 0;
            numberToGuess = rand() % a + 1;
//            printf("%i", numberToGuess);

            for (;;)
            {
                printf("\nGuess a number between 1 and %d\n", a);
                scanf("%d", userGuess);
                userTotalGuess = userTotalGuess + 1;
                char c = userGuess;
                int x = c - '0';
                if(x == numberToGuess)
                {
                    printf("Congratulations the number was: %d", numberToGuess);
                    userTotalGamesPlayed = userTotalGamesPlayed + 1;
                    userTotalGuess = userTotalGuess + 1;
                    break;
                }
                else if (x > numberToGuess)
                {
                    printf("User Guess too high. Guess again");
                    userTotalGuess = userTotalGuess + 1;
                }
                else if (x < numberToGuess)
                {
                    printf("User Guess too low. Guess again");
                    userTotalGuess = userTotalGuess + 1;
                }
                else if (c == q)
                {
                    break;
                }
            }
            
        }
        else if (menuChoice == '2')
        {
         printf("\nChange Maximum: ");
         scanf("%d", &a); 
        }
        else if (menuChoice == '3')
        {
            printf("Thank you user for playing");
            printf("Number of games played: %d and number of total guesses: %d", userTotalGamesPlayed, userTotalGuess);
            break;
        }
        
    }
    
    return 0;
}