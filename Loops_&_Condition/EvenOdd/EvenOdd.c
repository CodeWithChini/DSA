#include<stdio.h>
void main()
{
    int n;
    printf("Enter a Number");
    scanf("%d" , &n);

    if((n / 2) * 2 == n)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }

}
