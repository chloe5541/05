#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0; 
  

    printf("input a number:");
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
        sum =  sum +i + 1;
    }

    printf("Sum result is %i\n", sum);

    return 0;
}