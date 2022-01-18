#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>ve (5,1); //5 is the size and 1 is initialized at every index
    vector<int> ex(ve);

    // for(int i = 0; i <5;i++)
    // {
    //     cout << ve[i] << endl;
    // }
    for(int i:ex,ve)
    {
        cout<<i<<endl;
    }

    // vector<int>::iterator it;
    // for(it = v.begin(); it != v.end();it++)
    // {
    //     cout<<&(*it)<<" "<<*it<<endl;
    // }

    // cout<<v.back()<<endl;
}
