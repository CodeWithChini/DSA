#include<stdio.h>
void main()
{
    int size;
    printf("Enter a size of an array : ");
    scanf("%d", &size);
    int arr[size];

    // largest = a[0] = -10

    for (int i = 0; i < size; i++)
    {
        printf("Enter a val : ");
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    
    for(int i = 0 ; i < size ; i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("%d", largest);
    
}