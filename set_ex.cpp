#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s; 
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(20);
    s.insert(1);
    s.insert(2);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    set<int>::iterator itr=s.find(20);
    cout<<*itr<<endl;
}