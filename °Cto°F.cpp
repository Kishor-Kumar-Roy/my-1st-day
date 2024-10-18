#include<iostream>
using namespace std;
class operation
{
    private:
    float c,f;
    public:
    void convert()
    {
        cout<<"enter a value(in F)=";
        cin>>f;
        c=(5.0/9.0)*(f-32);
        cout<<"in C="<<c<<endl;
    }
     void convert2()
    {
        cout<<"enter a value(in C)=";
        cin>>c;
        f=(9.0/5.0)*c+32;
        cout<<"in F="<<f<<endl;
    }

};
int main()
{
    operation obj;
    obj.convert();
    obj.convert2();

    return 0;
}