#include<stdio.h>
#include<stdlib.h>
int* fun(int n)
{
    int *p;
    p=(int*)malloc(n*sizeof(int));
    printf("%d\n",sizeof(p));
    printf("%u\n",p);
    return p;
}
int main()
{
    int *A;
    A=fun(10);
    printf("%d\n",sizeof(A));
    for(int i=0;i<10;i++)
         A[i]=i+1;

    for(int i=0;i<5;i++)
    {    printf("%d ",A[i]);}
}