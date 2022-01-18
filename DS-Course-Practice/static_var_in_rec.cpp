#include<stdio.h>
#include<iostream>
using namespace std;
int rec(int n)
{
    static int r=0;
    if (n>0)
    {
        r++;
        cout<<"r="<<r<<"n="<<n<<endl;
        return rec(n-1)+r;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Result is : "<<rec(n);
}