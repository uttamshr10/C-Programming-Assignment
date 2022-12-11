// 6. WAP to display factorial of a given number N

#include <stdio.h>
int main()
{
    int i, n, factorial = 1;
    printf("Enter a number to find the factorial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d.", n, factorial);
}

/* Ignore it.
i      |   n = 4 (Suppose)  |       factorial += i;
1      |   1 <= 4           |       1 * 1 = 1
2      |   2 <= 4           |       1 * 2 = 2
3      |   3 <= 4           |       2 * 3 = 6
4      |   4 <= 4           |       6 * 4 = 24

*/
