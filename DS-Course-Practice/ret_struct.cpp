#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle* fun()
{
    struct Rectangle *r;
    r=new Rectangle;
    r->length=100;
    r->breadth=200;
    return r;
}
int main()
{
    struct Rectangle* ptr=fun();
    printf("%d %d\n",ptr->length,ptr->breadth);
    cout<<sizeof(ptr)<<endl;

}