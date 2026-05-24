#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("This number is positive.\n");
    }
    else
    {
        printf("This number is not positive.\n");
    }

    return 0;
}