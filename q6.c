//  Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int n, i;
    int fact = 1;
    printf("Enter the value of n\n");
    scanf("%d\n",&n);

    for (int i = 1; i <= n ; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d is %d", n,fact);

    return 0;
}