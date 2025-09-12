#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter a & b\n");
    scanf("%d %d" , &a , &b);

    int temp = a;
    a = b;
    b = temp;

    printf("%d %d" , a , b);
    }
