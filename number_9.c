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

/* Table logic. [Ignore it.]
i           |           n = 5 (suppose)           |           c = 0
1           |           5 % 1 = 0 (true)          |           0 + 1 = 1
2           |           5 % 2 = 0 (false)         |           1
3           |           5 % 3 = 0 (false)         |           1
4           |           5 % 4 = 0 (false)         |           1
5           |           5 % 5 = 0 (false)         |           1 + 1 = 2;
*/
