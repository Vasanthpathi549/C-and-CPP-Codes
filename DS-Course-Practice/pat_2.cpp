#include<iostream>
using namespace std;
int main()
{

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }


    // 3 2 1 
    // 3 2 1
    // 3 2 1
    int i=1,j=1,n;
    cin>>n;
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            cout<<(n-j+1)<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }

    // 1 2 3
    // 4 5 6
    // 7 8 9
    int i=1,j=1,c=1;
    while(i<=n){
        while(j<=n){
            cout<<c<<" ";
            j+=1;
            c+=1;
        }
        cout<<endl;
        i+=1;
    }
    

}