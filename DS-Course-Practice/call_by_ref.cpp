#include<stdio.h>
#include<iostream>
void swap(int &a,int &b)
{
    printf("%u\n",&a);
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%u\n",&a);
    printf("%d %d\n",a,b);
}