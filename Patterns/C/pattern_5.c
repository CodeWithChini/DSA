#include<stdio.h>
int main()
{
    int i, j ,n = 1;
    for(i = 1 ; i <= 5 ; i++)
    {
          if(n % 2 == 0)
            {
               n = 1;   
            }
            else
            {
                n = 0;
            }
        for(j = 1 ; j <= i ; j++)
        {
            printf("%d", n );
            if(n == 0)
            {
                n = 1;
            }
            else
            {
                n= 0;
            }
        }
        printf("\n");
    }
}