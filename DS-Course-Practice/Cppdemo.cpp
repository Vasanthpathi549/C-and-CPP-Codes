#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        cout<<"Area: "<<(length*breadth)<<endl;
    }
    int getLength();
};
int Rectangle::getLength()
{
    return length;
}
int main()
{
    Rectangle r(10,50);
    r.area();
    cout<<"Length is: "<<r.getLength();
}