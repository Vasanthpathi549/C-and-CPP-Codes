#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Reference
    int a=100;
    int &i=a;
    int k=0;
    cout<<a<<" "<<i<<endl;
    //vector
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;
    cout<<"Variable is : "<<v.at(2)<<endl;
    cout<<"Size : "<<v.size()<<endl;
    // v.clear();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Last Value: "<<v.back()<<endl;
    cout<<"First Value: "<<v.front()<<endl;
    cout<<"Size : "<<v.size()<<" Capacity: "<<v.capacity()<<endl;
}