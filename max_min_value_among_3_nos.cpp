#include<iostream>
using namespace std;
/*
void maxvalue(double a ,double b, double c)
{
    if(a>=b && a>=c)
    {
        cout<<"max value="<<a<<endl;
    }
    else if(b>=a&& b>c)
     {
        cout<<"max value="<<b<<endl;
    }
    else  {
        cout<<"max value="<<c<<endl;
    }
}
void minvalue(double a, double b, double c)
{
    if(a<=b && a<=c)
    {
        cout<<"min value="<<a<<endl;
    }
    else if(b<=a&& b<=c)
     {
        cout<<"min value="<<b<<endl;
    }
    else  {
        cout<<"min value="<<c<<endl;
    }
}
*/
int main()
{
double a,b,c;
cout<<"enter value of a b c: ";
cin>>a>>b>>c;
int maxvalue=(a>b)?((a>c)?a:c):((b>c)?b:c);
int minvalue=(a<b)?((a<c)?a:c):((b<c)?b:c);
cout<<"max value="<<maxvalue<<endl;
cout<<"min value="<<minvalue<<endl;
/*
maxvalue(a,b,c);
minvalue(a,b,c);
*/
    return 0;
}