#include<iostream>
using namespace std;
class Circle
{
    private:
    int r;
    public:
    float area(int x)
    {
        r=x;
        return 3.14*r*r;
    }
};
int main()
{
    Circle R;
    int r;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    cout<<"area of triangle is "<<R.area(r);
    return 0;

}