#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int n;
    public:
    int reverse(int a)
    {
        int sum=0;
        n=a;
        while(a>0)
        {
            int r=a%10;
            sum=sum*10+r;
            a=a/10;
        }
        return sum;
    }
};
int main()
{
    ReverseNumber num;
    int x;
    cout<<"Enter number:"<<endl;
    cin>>x;
    cout<<"Reverse of number is "<<num.reverse(x)<<endl;
    return 0;
}