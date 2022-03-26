#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x, y, score = 0;
int gamestart();

int main()
{
    system("CLS");
    int box[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        box[i] = rand() % 100;
    }
    x = box[50];
    y = gamestart();
    if (y == 0)
    {
        main();
    }
    else
    {
        printf("\nYour score is : %d\n", score);
        printf("\n\nThanks for playing the game \n\n");
        printf("Game Built and Developed by Pooranjoy Bhattacharya\n\n");
        system("PAUSE");
    }
    return 0;
}

int gamestart()
{
    int i, ch, choice;
    printf("Welcome to Number Guessing Game\n\nPress any key to start the game . . . ");
    getchar();
    printf("\nYou will have 10 chances to guess a number between 1 to 100\n\nPress any key to generate the number . . .");
    getchar();
    printf("\nRandom Number Generated !");
    for (i = 9; i >= 0; i--)
    {
        printf("\nEnter your guess : ");
        scanf("%d", &ch);
        if (ch == x)
        {
            printf("Congratulations, you have guessed the correct number ! \n\n+15 Points !");
            score+=15;
            printf("\nYour score is : %d\n", score);
            break;
        }

        else if (ch < x)
        {
            printf("Try a Higher number ! ");
            printf("\nYou have %d remaining guesses \n", i);
        }
        else if (ch > x)
        {

            printf("Try a Lower number ! ");
            printf("\nYou have %d remaining guesses \n", i);
        }

        else
        {

            printf("\nYou have %d remaining guesses \n", i);
            printf("%d is not a number !", ch);
        }
        if (i == 0)
        {
            printf("\nBetter Luck Next Time ! \n");
            printf("\nYour score is : %d\n", score);
        }
    }

    printf("\nDo you want to play again ? \nPress 1 for 'YES' : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        return 0;
    }
    else
        return 1;
}