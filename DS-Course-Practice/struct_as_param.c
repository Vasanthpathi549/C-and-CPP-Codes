#include<stdio.h>
typedef struct
{
    int length;
    int breadth;
}rect;
int area(rect &r1)
{
    r1.length++;
    return (r1.length*r1.breadth);
}
int main()
{
    rect r={10,2};
    int a=area(r);
    printf("%d\n",a);
    printf("%d",r.length);
}
