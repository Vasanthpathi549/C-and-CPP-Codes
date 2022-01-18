#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Vasanth";
    m[2]="Kumar";
    m[3]="Pathi";
    m[4]="Vasanth";
    // map<int,string>::iterator it;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Count is "<<m.count(2)<<endl;
    m.erase(4);
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<m.end()<<endl;
}