#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(10);
    maxi.push(2);
    maxi.push(20);
    maxi.push(3); 
    while(!maxi.empty())
    {
        cout<<"Max Queue"<<maxi.top()<<endl;
        maxi.pop();
    }
    cout<<maxi.empty()<<endl;


    mini.push(10);
    mini.push(2);
    mini.push(50);
    mini.push(3);
    while(!mini.empty())
    {
        cout<<"Min Queue"<<mini.top()<<endl;
        mini.pop();
    }
    cout<<mini.empty()<<endl;
}