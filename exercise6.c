#include <stdio.h>

int main(void)
{
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum is %d\n", sum);
    int difference = num1 - num2;
    printf("The difference is %d\n", difference);
    int product = num1 * num2;
    int quotient = num1 / num2;
    printf("The product is %d\n", product);
    printf("The quotient is %d\n", quotient);
    return 0;
}
