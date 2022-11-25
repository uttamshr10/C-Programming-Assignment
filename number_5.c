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
