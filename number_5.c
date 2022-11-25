// 5. WAP to find the sum of the series 1+2+3+4….. Up to entered n numbers.

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number to find the sum of it's series: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of the series of %d is %d.", n, sum);
}

/*
Ignore it.
i   |   n = 5(suppose)    |   sum
1   |   1 <= 5            |   0 + 1 = 1
2   |   2 <= 5            |   1 + 2 = 3
3   |   3 <= 5            |   3 + 3 = 6
4   |   4 <= 5            |   6 + 4 = 10
5   |   5 <= 5            |   10 + 5 = 15
*/
