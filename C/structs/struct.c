#include <stdio.h>
#include <string.h>

struct player
{
    char name[20];
    int score;
};

int main()
{
    struct player player1;
    struct player player2;

    strcpy(player1.name, "akshat");
    player1.score = 4;

    strcpy(player2.name, "raj");
    player2.score = 5;

    printf("%s %d", player1.name, player1.score);
    printf("\n%s %d", player2.name, player2.score);
}