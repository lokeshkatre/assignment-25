#include<iostream>
using namespace std;
class Area
{
    private:
    int a,l,b;
    float r;
    public:
    int area(int x)
    {
        a=x;
        return a*a;
    }
    int area(int x,int y)
    {
        l=x;
        b=y;
        return l*b;
    }
    float area(float x)
    {
        r=x;
        return 3.14*r*r;
    }

};
int main()
{
    Area A;
    int a=4,l=5,b=4;
    float r=4.3;
    cout<<"Area of square is "<<A.area(a)<<endl;
    cout<<"Area of rectangle is "<<A.area(l,b)<<endl;
    cout<<"Area of circle is "<<A.area(r)<<endl;
    return 0;
}