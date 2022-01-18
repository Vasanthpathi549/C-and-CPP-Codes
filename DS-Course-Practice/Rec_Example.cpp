#include<iostream>
using namespace std;
void rec(int y){
    if (y<=0)
        return;
    else
    {   cout<<y<<endl;
        rec(y-1);
    }
}
int main()
{
    int x;
    cin>>x;
    rec(x);
}