#include<iostream>
using namespace std;
int main()
{
    char alp[26];
    int j=0;
    for(int i=97;i<=122;i++)
    {
        alp[j]=char(i);
        j+=1;
    }

    for(int i=0;i<26;i++)
        cout<<alp[i]<<" ";
}