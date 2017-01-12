#include <iostream>

using namespace std;
int umnojenie(int a , int b)
{
    if(a==1) return b;
    else  return b + umnojenie(a-1,b);

}
int main()
{
    int a =4,b=5;
    cout<<umnojenie(a,b);

    return 0;
}
