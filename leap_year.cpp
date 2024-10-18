#include<iostream>
using namespace std;
class year
{
    private:
    int year;
    public:
    void check()
    {
        cout<<"enter a year:";
        cin>>year;
        if(year%4==0)
        {
            cout<<"leap year";
        }
        else 
        {
            cout<<"not leap year";
        }
    }

};
int main()
{
    year obj;
    obj.check();
    return 0;
}