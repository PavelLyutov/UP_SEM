#include <iostream>

using namespace std;
int stepen1(int n,int stepen)
{
 if(stepen==0) return 1;
 if(stepen==1) return n;
 if(stepen != 1) return n*stepen1(n,stepen-1);



}

int main()
{
    int n =5;
    int stepen=3;
    cout<<stepen1(n,stepen);


    return 0;
}
