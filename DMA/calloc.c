#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int *)calloc(3, sizeof(int));
    *p = 10;
    *(p + 1) = 20;
    *(p + 2) = 30;
    printf("size = %d\n", sizeof(p));
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value of *p: %d\n", *p);
    printf("Value of *(p + 1): %d\n", *(p + 1));
    printf("Value of *(p + 2): %d\n", *(p + 2));
    free(p);


    return 0;
}