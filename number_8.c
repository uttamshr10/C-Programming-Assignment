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

/* Ignore it.
i       |       n = 6                                    |       divisors
1               6 % 1 = 0                                |            1
2               6 % 2 = 0                                |            2
3               6 % 3 = 0                                |            3
4               6 % 4 = 2 (which is not equal to 0.)     |            -
5               6 % 5 = 1 (which is not equal to 0.)     |            -
6               6 % 6 = 0                                |            6

*/
