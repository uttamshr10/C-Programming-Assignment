// 8. WAP to read a number n and display all of its divisors.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number to find all of it's divisors: ");
    scanf("%d", &n);
    printf("\nAll of %d divisors are\n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
}
