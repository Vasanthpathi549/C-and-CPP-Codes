#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int length;
    int breadth;
}rect;
int main()
{
    rect *p;
    p=(rect*)malloc(sizeof(rect));
    p->length=100;
    p->breadth=20;
    printf("%d\n",(p->length*p->breadth));
}