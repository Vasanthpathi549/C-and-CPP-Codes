#include<iostream>
#include<functional>
using namespace std;
template<typename op>
class Operators
{
    public:
    int x,y;
    Operators(int x,int y,op f)
    {
        this->x = x;
        this->y=y;
        cout<<f(x,y)<<endl;
    }
};
int main()
{
    Operators(10,20,std::plus()); 

}