#include<stdio.h>
void main()
{
    int p , r , t , SI;
    printf("Enter value of p , r and t\n");
    scanf("%d %d %d" , &p , &r , &t);
    SI = (p * r * t)/100;
    printf("simple interest = %d" , SI);
}
