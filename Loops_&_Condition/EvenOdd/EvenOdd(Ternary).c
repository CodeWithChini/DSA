#include<stdio.h>
void main()
{
    int a ;
    printf("Enter a number\n");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("Even"):printf("odd");
}
