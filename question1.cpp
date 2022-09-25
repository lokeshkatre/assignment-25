#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    void setComplex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    Complex C;
    int a,b;
    cout<<"Enter real and imaginary part:"<<endl;
    cin>>a>>b;
    C.setComplex(a,b);
    C.display();
    return 0;    
}