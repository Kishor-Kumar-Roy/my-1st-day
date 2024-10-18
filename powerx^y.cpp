#include<iostream>
#include<math.h>
using namespace std;
class operation
{
     private:
     int x,y,z;
     public:
     void power()
     {
        cout<<"enter two values :";
        cin>>x>>y;
        z=x^y;
        
        cout<<"power is"<<z;
     }

};
int main()
{
    operation obj;
    obj.power();

    return 0;
}