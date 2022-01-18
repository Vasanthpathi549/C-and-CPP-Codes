#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0)
        return 1;
    else
        return n*fact(n-1);
}

int power(int m,int n)
{
    if (n<=0)
        return 1;
    else
        return m*power(m,n-1);
}

int taylor(int x,int n)
{
    int f,p;
    if (n==0)
        return 1;
    else{
        f=fact(n);
        p=power(x,n);
        return (p/f)+taylor(x,n-1);
    }
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<taylor(x,n);

}