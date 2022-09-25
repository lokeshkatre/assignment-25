#include<iostream>
using namespace std;
class time
{
    private:
    int hrs,min,sec;
    public:
    void setComplex(int x,int y,int z)
    {
        hrs=x;
        min=y;
        sec=z;
    }
    void display()
    {
        cout<<hrs<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    }
};
int main()
{
    time C;
    int a,b,c;
    cout<<"Enter hrs,min,sec  respectively:"<<endl;
    cin>>a>>b>>c;
    C.setComplex(a,b,c);
    C.display();
    return 0;    
}