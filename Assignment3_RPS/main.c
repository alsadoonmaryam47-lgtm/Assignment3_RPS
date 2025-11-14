#include <stdio.h>
#include "Assignment3.h"

int main(void)
{
    printf("%s\n", playRockPaperScissors("Rock", "Scissors"));   // Player1
    printf("%s\n", playRockPaperScissors("Paper", "Rock"));      // Player1
    printf("%s\n", playRockPaperScissors("Scissors", "Rock")); // Draw
    printf("%s\n", playRockPaperScissors("Rock", "Banana"));     // Invalid
    return 0;
} 