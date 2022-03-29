#include <stdio.h>  //standard input-output library
#include <stdlib.h>//library to implement System clear function
#include <time.h> //time library to change the value of rand() function

int i, x, y, score = 0; // score integer initialized wwith 0
int gamestart();        // function to start the game

int main()
{
    system("CLS"); // FUNTION TO CLEAR THE SCREEN IN COMMAND LINE
    int box[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        box[i] = rand() % 100;
    }
    x = box[50];
    y = gamestart();
    if (y == 0) // returned from the function gamestart();
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

int gamestart() // return type is set in order to make sure that the game can be started again
{
    int ch, choice;
    printf("Welcome to Number Guessing Game\n\nPress any key to start the game . . . ");
    getchar();
    printf("\nYou will have 10 chances to guess a number between 1 to 100\n\nPress any key to generate the number . . .");
    getchar();
    printf("\nRandom Number Generated !");
    for (i = 9; i >= 0; i--) // loop for the number of choices
    {
        printf("\nEnter your guess : ");
        scanf("%d", &ch);

        if (ch == x)
        {
            printf("\nCongratulations, you have guessed the correct number ! \n\n+15 Points !");
            score += 15; // score gets incremented with a correct answer
            printf("\nYour score is : %d\n", score);
            break;
        }

        else if (ch < x)
        {
            printf("Try a Higher number ! \n");
            printf("\nYou have %d remaining guesses \n", i);
        }

        else if (ch > x)
        {
            printf("Try a Lower number ! \n");
            printf("\nYou have %d remaining guesses \n", i);
        }

        else
        {
            printf("\nYou have %d remaining guesses \n", i);
            printf("%d is not a number !\n", ch);
        }
    }

    printf("\nBetter Luck Next Time ! \n");
    printf("\nYour score is : %d\n", score);

    printf("\nDo you want to play again ? \nPress 1 for 'YES' : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        return 0;
    }
    else
        return 1;
}