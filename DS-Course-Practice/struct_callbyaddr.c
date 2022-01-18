#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
    int arr[10];
};
void changelandb(struct Rectangle *r1)
{
    r1->length =20;
    printf("%d\n",r1->length*r1->breadth);
}
int main()
{
    struct Rectangle r={10,20,{1,2,3,4,5,6,7,8,9}};
    changelandb(&r);
    printf("%d\n",r.length);
    printf("%d\n",r.arr+1   );
}