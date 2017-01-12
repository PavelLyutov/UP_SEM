#include <iostream>

using namespace std;
int fib(int x)
{
    if(x<2) return x;
    return (fib(x-1) + fib(x-2));
}

int main()
{
    int x =7;
    cout<<fib(x);
    return 0;
}
