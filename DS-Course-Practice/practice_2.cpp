#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct{
    int length;
    int breadth;
}rect;
void swap(int x,int y) {
    int temp=x;
    x=y;
    y=temp;
}

void swap_cba(int *x,int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

void swap_cbr(int &x,int &y) {
    int temp=x;
    x=y;
    y=temp;
}

void array_as_param(int *X)
{
    for(int i=0;i<5;i++)
    {
        printf("%dth element is: %d\n",i,*(X+i));
    }
}

int* array_return()
{
    int *p;
    p=new int[5];
    for(int i=0;i<5;i++) p[i]=i+1;
    delete[] p;
    return p;
    
}
int main()
{
    //pointer to structure
    rect r1={10,5};
    rect *r2;
    r2=&r1;
    printf("Length is : %d \n Breadth is : %d\n ",r2->length,r2->breadth);

    //call by value
    int a=10,b=20,c=40,d=80;
    swap(a,b);
    printf("After Calling by Value a=%d b=%d\n",a,b);
    //call by address

    swap_cba(&a,&b);
    printf("After Calling by Address a=%d b=%d\n",a,b);

    //call by reference
    swap_cbr(c,d);
    printf("After Calling by Value a=%d b=%d\n",c,d);

    //array as parameter
    int A[]={1,2,3,4,5};
    array_as_param(A);
    
    //return array
    int *arr;
    arr=array_return();
    int ind=0;
    for(int i=0; i<5;i++){
        cout<<"Element at "<<ind<<" is "<<arr[i]<<endl;
        ind++;
    }



}