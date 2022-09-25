#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int l,b;
    public:
    int area(int x,int y)
    {
        l=x,b=y;
        return l*b;
    }
};
int main()
{
    Rectangle R;
    int a,b;
    cout<<"Enter dimensions of rectangle:"<<endl;
    cin>>a>>b;
    cout<<"area of rectangle is "<<R.area(a,b);
    return 0;

}