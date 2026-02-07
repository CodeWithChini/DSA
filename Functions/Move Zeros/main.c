#include<stdio.h>

void moveZeros(int a[], int n)
{
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            a[idx++] = a[i];
        }
        while (idx < n)
        {
            a[idx++] = 0;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;
    moveZeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

}
