#include<iostream>
#include<cmath>
using namespace std;
class calculate
{
    private:
   int  p,t,r,n;
   public:
   void simpleinterest()
   {
    cout<<"enter initial money:"<<endl;
    cin>>p;
    cout<<"enter time(in years):"<<endl;
    cin>>t;
    cout<<"enter interest:"<<endl;
    cin>>r;
    int simple_interest=(p*r*t)/100;
    cout<<"simple inetrest is="<< simple_interest<<endl;
    cout<<"total money with simple inetrest is="<<p+ simple_interest<<endl;
   }
   void compound_interest()
   {
     cout<<"enter initial money:"<<endl;
    cin>>p;
    cout<<"enter time(in years):"<<endl;
    cin>>t;
    cout<<"enter interest:"<<endl;
    cin>>r;
    cout<<"enter number of times interest applied per time period:";
    cin>>n;
    r/=100;
    int compound_interest=p*pow((1+r/n),n*t);
    cout<<"compond inetrest is="<< compound_interest<<endl;
    cout<<"total money with compound inetrest is="<<p+ compound_interest<<endl;
   }

};
int main()
{
    calculate obj;
   // obj.simpleinterest();
    obj.compound_interest();

    return 0;
}