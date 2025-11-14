#include <string.h>
#include "Assignment3.h"

const char* playRockPaperScissors(const char* player1, const char* player2)
{
    // Validate inputs first
    if (player1 == NULL || player2 == NULL)
        return "Invalid";

    // List of valid moves
    int p1_valid =
        strcmp(player1, "Rock") == 0 ||
        strcmp(player1, "Paper") == 0 ||
        strcmp(player1, "Scissors") == 0;

    int p2_valid =
        strcmp(player2, "Rock") == 0 ||
        strcmp(player2, "Paper") == 0 ||
        strcmp(player2, "Scissors") == 0;

    if (!p1_valid || !p2_valid)
        return "Invalid";

    // Draw condition
    if (strcmp(player1, player2) == 0)
        return "Draw";

    // Player1 win conditions
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0))
        return "Player1";

    // Otherwise Player2 wins
    return "Player2";
}
