#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter two numbers to find the sum: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("The sum of two numbers is %d", sum);
}

// How to run your code in VS Code Terminal (Ignore it.)
// gcc filename with extension
// ./a.exe

// for gcc issue
// see this link, works well : https://stackoverflow.com/questions/69827019/cannot-open-source-file-stdio-h-in-visual-studio-code
