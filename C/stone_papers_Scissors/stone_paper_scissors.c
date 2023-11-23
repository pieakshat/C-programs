#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int display_choice(choice)
{
    if (choice == 1)
    {
        printf("choice: stone"); // to display player's choice
    }
    else if (choice == 2)
    {
        printf("choice: paper");
    }
    else
    {
        printf("choice: scissor");
    }
}

int display_result(flag)
{
    if (flag == 1)
    {
        printf("\nyou win");
    }
    else if (flag == 0)
    {
        printf("\nDraw");
    }
    else
    {
        printf("\nyou lose");
    }
}

int main()
{
    int playerchoice, computerchoice, result;
    printf("1.stone 2.paper 3.scissor");
    printf("\nenter choice: "); // input from the user
    scanf("%d", &playerchoice);
    sleep(1);
    printf("\nyour ");
    display_choice(playerchoice);

    computerchoice = (rand() % 3 + 1);

    sleep(1);
    printf("\ncomputer's ");
    display_choice(computerchoice);

    if (playerchoice == computerchoice)
    {
        result = 0;
    }
    else if ((playerchoice == 1 && computerchoice == 3) ||
             (playerchoice == 2 && computerchoice == 1) ||
             (playerchoice == 3 && computerchoice == 2))
    {
        result = 1;
    }
    else
    {
        result = -1;
    }

    sleep(1);
    display_result(result);
}
