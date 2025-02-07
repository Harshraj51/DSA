#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
    int n, i, j, temp, key, low, high, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at position %d", mid+1);
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        printf("Element not found");
    }
    return 0;
}