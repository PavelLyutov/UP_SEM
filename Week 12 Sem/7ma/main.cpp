#include <iostream>

using namespace std;
int minimal(int* arr,int size)
{

    if(size==1) return *arr;
    int minimum=minimal(arr+1,size-1);
    if(*arr < minimum) return *arr;
    else return minimum;




}

int main()
{
    int size=10;
    int arr[10] = {1,2,2,6,14,5,-7,8,9,11};
    cout<<minimal(arr,size);
    return 0;
}
