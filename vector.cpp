#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<v.size()<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<v.capacity()<<endl;

    
}