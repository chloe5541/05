#include <stdio.h>

int main(void)
{
    int answer = 59;
    int input;
    int trial = 0;

    do
    {
        printf("Guess a number:");
        scanf("%i", &input);

        if (input > answer)
            printf("High\n");
        else if (input < answer)
            printf("Low\n");

        trial++;
    } while (answer != input);

    printf("congratulations! trial: %i\n", trial);

    return 0;
}