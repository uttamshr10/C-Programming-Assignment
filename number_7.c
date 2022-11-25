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

/* Table logic [Ignore this.]
i           |           n = 6           |           sum = sum + i;
2           |           2 < = 6         |           0 + 2 = 2
4           |           4 < = 6         |           2 + 4 = 6
6           |           6 < = 6         |           6 + 6 = 12
*/
