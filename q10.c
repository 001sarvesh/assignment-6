//  Write a program to reverse a given number

#include <stdio.h>
int main()
{
    int n,i,rem, reverse = 0;

printf("Enter a number ");
scanf("%d",&n);

while (n!=0)
{
    rem = n % 10;
    reverse = reverse*10 + rem;
}
printf("Reverse number is %d", reverse);

    return 0;
}