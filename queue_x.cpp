#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Vasanth");
    q.push("Kumar");
    q.push("Pathi");
    cout<<"First Element: "<<q.front()<<endl;
    cout<<"Last Element: "<<q.back()<<endl;
    cout<<"Size is: "<<q.size()<<endl;
}