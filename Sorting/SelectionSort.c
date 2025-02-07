#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int n, i, j, min,pivot,temp;
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
        min = arr[i];
        pivot = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                pivot = j;

                
            }

        }
        temp = arr[i];
        arr[i] = arr[pivot];
        arr[pivot] = temp;
    }
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}