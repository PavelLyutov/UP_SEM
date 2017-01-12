#include <iostream>

using namespace std;
bool grow(int* masiv,int size)
{
    if(size==1) return 1;
    int stan = grow( masiv+1,size-1);
    if(*(masiv+1)>*masiv && stan==1) return 1;
    else return 0;



}

int main()
{
    int size=9;
    int masiv[9]={1,0,3,4,5,6,7,8,9};
    cout<<grow(masiv,size);
    return 0;
}
