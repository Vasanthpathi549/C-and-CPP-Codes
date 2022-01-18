#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=1,c=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c<<" ";
            j+=1;
            c+=1;
        }
        cout<<endl;
        i+=1;
    }
}