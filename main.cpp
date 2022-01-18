#include<iostream>
#include<array>
using namespace std;
int main()
{
    int a[3]={0,1,2};
    array<int,5> arr={1,2,3,4};
    int s=arr.size();
    cout<<arr.at(1)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<a[4]<<endl;

}