//  Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int i,n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i*i;
    }
    printf("%d\n",sum);
    return 0;
}