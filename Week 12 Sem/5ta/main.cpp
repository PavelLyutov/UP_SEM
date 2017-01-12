#include <iostream>

using namespace std;
int function5(int n)
{
 if(n==0) return 0;
 if((n%10)%2 == 0)return  1 + function5(n/10);
 else return  function5(n/10);



}

int main()
{
    int n=2222;
    cout<<function5(n);

    return 0;
}
