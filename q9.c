//  Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int a, b, i, LCM = 1;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a*b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            break;
        }
    }
    printf("LCM is %d\n", i);
    return 0;
}