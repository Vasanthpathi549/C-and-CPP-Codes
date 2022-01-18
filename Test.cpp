#include <iostream>
using namespace std;
int factorial(int n)
{
    int ch;
    if (n == 0)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int n, res;
    cin >> n;
    res = factorial(n);
    cout << res << endl;
    return 0;
}