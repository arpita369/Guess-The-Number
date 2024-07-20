//2 player game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1; //Generates a random number btween 1 and 100.
    //printf("The number is : %d\n", number);
    //keep running the loop untill the number is guessed.
    printf("\n\n***PLAYER 1***\n\n");
    int n1guesses = 1;
    do
    {
        printf("Guess the number between 1 to 100 : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed it in %d attempts.\n", n1guesses);
        }
        n1guesses++;
    } while (guess != number);

    srand(time(0));
    number = rand() % 100 + 1;
    //printf("The number is : %d\n", number);
    printf("\n\n***PLAYER 2***\n\n");
    int n2guesses;
    do
    {
        printf("Guess the number between 1 to 100 : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed it in %d attempts.\n", n2guesses);
        }
        n2guesses++;
    } while (guess != number);

    if (n1guesses > n2guesses)
    {
        printf("*****CONGRATS!!! 2nd PLAYER*****\n");
        printf("*You Won*");
    }
    else if (n1guesses < n2guesses)
    {
        printf("*****CONGRATS!!! 1st PLAYER*****\n");
        printf("*You Won*");
        }
    else
    {
        printf("*Draw Match*");
    }

    return 0;
}
