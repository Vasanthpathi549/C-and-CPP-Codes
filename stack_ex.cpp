#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Vasanth");
    s.push("Kumar");
    s.push("Pathi");
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;
}