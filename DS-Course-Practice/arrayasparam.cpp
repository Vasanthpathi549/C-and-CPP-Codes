#include<iostream>
using namespace std;
void fun(int A[ ])
{
    A[0]=26;
}
int main()
{
    int A[]={1,2,3,4,5,6};
    cout<<sizeof(A)<<endl;
    fun(A);
    for(int i=0; i<6;i++) cout<<A[i]<<endl;
}