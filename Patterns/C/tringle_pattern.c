#include<stdio.h>
int main()
{
    int i, j , n = 5;
    for(i = 1 ; i <= n ; i++)
    {
        // space
       for(j = 1 ; j <= n - i ; j++)
       {
            printf(" ");
       }
       // numbers
       for(j = 1 ; j <= 2 * i - 1 ; j++)
       {
        printf("%d", i);
       }
        
       printf("\n");
    }
}