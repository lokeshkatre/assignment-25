#include<iostream>
using namespace std;
class Square
{
    private:
    int n;
    public:
    int sq(int x)
    {
        static int count=0;
        count++;
        cout<<"function called "<<count<<" times"<<endl;
        n=x;
        return n*n;
    }
};
int main()
{
    Square s;
    int a;
    cout<<"Enter number:";
    cin>>a;
    cout<<s.sq(a);
    return 0;
}