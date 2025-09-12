#include<stdio.h>
void main()
{
    int area , r;
    float pie = 3.14;
    printf("Enter value of r =\n");
    scanf("%d" , &r);
    area = pie * r * r;
    printf("area of circle = %d" , area);
}
