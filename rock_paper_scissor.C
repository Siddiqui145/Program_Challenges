#include <stdio.h>

void playGame()
{
    char p1, p2;

    printf("\nEnter Player 1 Choice as ROCK => R, PAPER => P, SCISSOR => S: \n");
    scanf(" %c", &p1);

    printf("Enter Player 2 Choice as ROCK => R, PAPER => P, SCISSOR => S: \n");
    scanf(" %c", &p2);

    if (((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's')) || ((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r')) || ((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p')))
    {
        printf("Player 1 Wins\n");
    }
    else if (((p1 == 'P' || p1 == 'p') && (p2 == 'S' || p2 == 's')) || ((p1 == 'R' || p1 == 'r' ) && ( p2 == 'P' || p2 == 'p')) || ((p1 == 'S' || p1 == 's') && ( p2 == 'R' || p2 == 'r')))
    {
        printf("Player 2 Wins\n");
    }
    else
    {
        printf("Tie Game\n");
    }
}

int main()
{
    char choice;

    do
    {
        playGame();

        printf("\n Do you want to continue playing? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    if (choice == 'N' || choice == 'n')
    {
        printf("\n Thanks for playing! Exiting the program.\n");
    }
    else
    {
        printf("\n Thanks for playing! Invalid Choice Entered.\n");
        return 0;
    }

    return 0;
}

