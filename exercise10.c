#include <stdio.h>


int main(void)
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if (number1 > number2)
    {
        printf("%d is the larger number.", number1);
        }
        else if (number1 < number2)
        {
        printf("%d is the larger number.", number2);
        }
        else  
            {
                printf("Both numbers are equal.");
            }
            return 0;
        }
            