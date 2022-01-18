#include<stdio.h>
int add(int x,int y)//prototype and x and y are formal parameters
{
    return(x+y);
}
int main()
{
    int x,y,z;
    x=10;
    y=10;
    z=add(x,y); //x and y are actual parameters
    printf("Sum is :%d",z);
}