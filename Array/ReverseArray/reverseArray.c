#include<stdio.h>
void main()
{
    int size , i;
    printf("Enter a size of array : ");
    scanf("%d", &size);
    int arr[size];

    for(i = 0 ; i < size ; i++)
    {
        printf("Enter a value : ");
        scanf("%d", &arr[i]);
    }

    for(i = 0  ; i < size/2 ; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1 ] = temp;
    }

    for(i = 0 ; i < size ; i++)
    {
        printf("%d", arr[i]);
    }
}
