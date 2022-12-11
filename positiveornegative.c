// 2. WAP to display if the number is positive or negative

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check whether it is positive, negative or zero: ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is an positive number.", number);
    }
    else if (number < 0)
    {
        printf("%d is an negative number.", number);
    }
    else
    {
        printf("The number you entered is zero.", number);
    }
}
