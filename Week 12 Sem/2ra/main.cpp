#include <iostream>

using namespace std;
int fact(int number)
{
    if(number==1) return 1;
    else return number*fact(number-1);



}


int main()
{
    int number = 5;
    cout<<fact(number);
    return 0;
}
