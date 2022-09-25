#include<iostream>
using namespace std;
class Greatest
{
    private:
    int x,y,z;
    public:
    int largest(int a,int b,int c)
    {
        x=a,y=b,z=c;
        if(x>y)
        {
            if(y>z)
            return x;
            else if(z>x)
            return z;
        }
        else if(y>x)
        {
            if(x>z)
            return y;
            else if(z>y)
            return z;
        }
    }
};
int main()
{
    Greatest L;
    int a,b,c;
    cout<<"Enter numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<"Largest number is "<<L.largest(a,b,c);
    return 0;
}