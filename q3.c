//  Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
    int i,n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + 2*i+1;
    }
    printf("%d\n", sum);
    return 0;
}