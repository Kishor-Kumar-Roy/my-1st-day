#include<iostream>
using namespace std;
class calculate
{
   private:
   int cm,m,km;
   public:
   void convert()
   {
    cout<<"enter length(in cm)="<<endl;
    cin>>cm;
    m=cm/100;
    km=cm/100000;
    cout<<"length in m ="<<m<<endl;
    cout<<"length in km ="<<km<<endl;
   }
};
int main()
{
    calculate obj;
    obj.convert();

    return 0;
}