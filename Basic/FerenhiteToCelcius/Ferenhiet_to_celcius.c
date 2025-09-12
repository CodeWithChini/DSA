#include<stdio.h>
void main()
{
    float f , cel;
    printf("Enter valu of f\n");
    scanf("%f" , &f);
    cel = ((f - 32)*5)/9;
    printf("celcius = %f" , cel);
}
