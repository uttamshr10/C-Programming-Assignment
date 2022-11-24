// 3. WAP to display whether the number is even or odd.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is an even number.", number);
    }
    else
    {
        printf("%d is an odd number.", number);
    }
}
