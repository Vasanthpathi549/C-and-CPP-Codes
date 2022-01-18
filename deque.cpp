#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_front(1);
    for(int i:d){
        cout << i <<endl;
    }
    // cout<<d.size()<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    // d.erase(d.begin()+1);
    // cout<<"First element: "<<d.front()<<endl;
    // cout<<"Last element: "<<d.back()<<endl;
    // cout<<"Size is: "<<d.size()<<endl;
    

}