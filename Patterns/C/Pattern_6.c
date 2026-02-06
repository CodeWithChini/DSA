#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;

    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottam = size - 1 - i;

            int min = top;
            if(left < min)
                min = left;
            if(right < min)
                min = right;
            if(bottam < min)
                min = bottam;

            printf("%d", n - min);
        }
        printf("\n");
    }
    return 0;
}
