#include <stdio.h>

int main(void)
{
    int num;
    printf("Input an integer:");
    scanf("%i", &num);

    if (num < 0)
        printf("Absolute value: %i\n", -num);
    else
        printf("Absolute value: %i\n", num);

    return 0;
}