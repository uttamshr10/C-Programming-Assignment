// 7. WAP to read first 20 number and display only sum of even numbers.

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number to check the sum of upto that number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf("Sum of all numbers from 1 to %d is %d.", n, sum);
}
