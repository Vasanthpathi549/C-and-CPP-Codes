#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    int *q=new int[5];
    for(int i=0; i<5; i++)
        p[i]=i+1;
    
    cout<<p<<endl;
    cout<<q<<endl;
    p=q;

    cout<<p<<endl;
    cout<<q<<endl;
    delete[] p;
    delete[] q;
}