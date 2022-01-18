#include<iostream>
using namespace std;
int* fun(int size) {
    int *p;
    p=new int[size];
    cout<<"Size is:"<<sizeof(p)<<endl;
    for (int i=0; i<size; i++)
        p[i]=i+1;
     return p;
}
int main()
{
    int *A;
    A=fun(5);
    for(int i=0; i<5; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<sizeof(A)/sizeof(int)<<endl;

    // cout<<sizeof(int)<<endl;
    int Ab[5];
    cout<<sizeof(Ab)<<endl;
}