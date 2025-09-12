#include<stdio.h>
void main()
{
    int fact = 1 , n , i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (fact <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("%d", fact);
}