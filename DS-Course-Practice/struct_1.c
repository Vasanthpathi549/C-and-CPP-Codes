#include<stdio.h>
typedef struct
{
    int length;
    int breadth;
}rect;
int main()
{
    rect r={10,15};
    rect *p=&r;
    printf("%d %d\n",r.length,r.breadth);
    printf("%u",p->length);
}