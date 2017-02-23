#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
struct Point{
double x;
double y;
double function1(Point point)
{
    double distance = sqrt((point.x-x)*(point.x-x)+(point.y-y)*(point.y-y));
    return distance;
}

};
void initPoints(Point& point,double x , double y)
{
    point.x = x;
    point.y = y;
}
double distance1(Point A,Point B)
{
    double distance = sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
    return distance;

}


int main()
{
    Point A,B;
    initPoints(A,5,10);
    initPoints(B,6,7);
    cout<<distance1(A,B)<<endl;
    cout<<A.function1(B)<<endl;


    return 0;
}
