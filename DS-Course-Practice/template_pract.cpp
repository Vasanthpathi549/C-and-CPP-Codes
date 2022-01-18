#include<iostream>
using namespace std;
template<class T>
class Example
{
    private:
    T x;
    T y;
    public:
    Example(T x,T y){
        this->x = x;
        this->y = y;
    }
    
    T area();
};

template<class T>
T Example<T>::area()
{
    cout<<"Area is : "<<(x*y)<<endl;
}
int main()
{
    
    Example<int> e(10,20);
    e.area();
}