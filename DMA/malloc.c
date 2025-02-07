#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("size = %d\n", sizeof(p));
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value of *p: %d\n", *p);
    free(p);
    return 0;
}