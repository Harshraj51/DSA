#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
  struct student y;
  struct student z;
    y.roll = 51;
    y.marks = 80;
    strcpy(y.name , "Harshraj Jaiswal");
    z.marks = 100;
    z.roll = 49;
    strcpy(z.name , "Harshit Kori"); 
    printf("Roll number of y: %d\n", y.roll);
    printf("Marks of y: %.2f\n", y.marks);
    printf("Name of y: %s\n", y.name);
    printf("Roll number of z: %d\n", z.roll);
    printf("Marks of z: %.2f\n", z.marks);
    printf("Name of z: %s\n", z.name);

    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    s->roll = 51;
    s->marks = 90;
    strcpy(s->name , "Ghanshyam Singh");
    printf("Roll number of s: %d\n", s->roll);
    printf("Marks of s: %.2f\n", s->marks);
    printf("Name of s: %s\n", s->name);
    printf("Size of s: %d\n", sizeof(struct student));
    printf("Size of s: %d\n", sizeof(s->name));
    free(s);
    
}