#include<iostream>
using namespace std;
int main()
{

    //row based take row value and increment it in nested loop
    
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        int v=i;
        for(j=0;j<=i;j++){
            cout<<v<<" ";
            v+=1;
        }
        cout<<endl;
    }
}