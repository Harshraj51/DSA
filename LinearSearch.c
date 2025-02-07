#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{ 
    int a[5] = {1, 2, 3, 4, 5};
    int i, key, flag = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element found at position %d\n", i + 1);
    }
    else
    {
        printf("Element not found\n");
    }
    getch();
    return 0;
}