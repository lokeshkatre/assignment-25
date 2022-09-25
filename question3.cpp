#include<iostream>
using namespace std;
class Factorial
{
    private:
    int n;
    public:
    
    void factorial(int x)
    {
        int fact=1;
        n=x;
        for(int i=n;i>0;i--)
        {
            fact=fact*i;
        }
        cout<<n<<"!="<<fact<<endl;
    }
};
int main()
{
    Factorial F;
    int x;
    cout<<"Enter number:";
    cin>>x;
    F.factorial(x);
    return 0;

}