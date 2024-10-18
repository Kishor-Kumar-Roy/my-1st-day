#include<iostream>
using namespace std;
class operaton
{
    private:4 6
    
    public:
    void swapping()
    {
        cout<<"enter two numbers:";
        cin>>x>>y;
        cout<<"before swapping x="<<x<< "  y="<<y<<endl;
        a=&x;
        b=&y;
        temp=*a;
        *a=*b;
        *b=temp;
        cout<<"after swapping x="<<*a<< "  y="<<*b<<endl;
    }
};
int main()
{
    operaton obj;
    obj.swapping();
    

    return 0;
}