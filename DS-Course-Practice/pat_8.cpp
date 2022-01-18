#include<iostream>
using namespace std;
int main()
{
    int i,j,n=101;
    // cin>>n;
    for(i=97;i<101;i++){
        for(j=97;j<=i;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}