#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    for(int i=0; i<5; i++) *(p+i)=i;
    for(int i=0; i<5; i++) cout<<*(p+i)<<endl;
    delete[] p;

    int l=100;
    int &r=l;
    cout<<l<<" "<<r<<endl;
}