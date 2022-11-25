// 9. WAP which displays if a number is prime or not. [Logic for prime number: divisible by itself and 1.]
#include <stdio.h>
int main()
{
    int i, n, c = 0;
    printf("Enter a number to check whether it is prime or not: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (n == 2)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
}
