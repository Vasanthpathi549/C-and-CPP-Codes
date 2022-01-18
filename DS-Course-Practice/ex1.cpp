#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int* fun(int size){
    int *ptr;
    ptr=new int[size];
    for(int i = 0; i < size;i++) ptr[i]=i+1;
    return p;
}
int main()
{
    int *arr,size;
    cin>>size;
    arr=fun(size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
