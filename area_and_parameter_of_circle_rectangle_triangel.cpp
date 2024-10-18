#include<iostream>
using namespace std;
class operation
{
  private:
  float r,a,b,c;
  public:
  void circle()
  {
    cout<<"enter radius of circle:  ";
    cin>>r;
    float area=3.14*r*r;
    float parameter=2*3.14*r;
    cout<<"area of circle is="<<area<<endl;
    cout<<"parameter of circle is="<<parameter<<endl;
  }
  void rectangle()
  {
    cout<<"length and wedth of rectangle=";
    cin>>a>>b;
    float area=a*b;
    float parameter=2*(a+b);
    cout<<"area of rectangle ="<<area<<endl;
    cout<<"parameter of rectangle="<<parameter<<endl;
  }
  void triangle()
  {
    cout<<"enter 3 sides of a tringle=";
    cin>>a>>b>>c;
    if(a*a==b*b+c*c)
    {
       float area=0.5*b*c;
    float parameter=a+b+c;
    cout<<"area of triangle ="<<area<<endl;
    cout<<"parameter of triangle="<<parameter<<endl;
    }
    else if(b*b==a*a+c*c)
    {
       float area=0.5*a*c;
    float parameter=a+b+c;
    cout<<"area of triangle ="<<area<<endl;
    cout<<"parameter of triangle="<<parameter<<endl;
    }
    else if(c*c==b*b+a*a)
    {
       float area=0.5*b*a;
    float parameter=a+b+c;
    cout<<"area of triangle ="<<area<<endl;
    cout<<"parameter of triangle="<<parameter<<endl;
    }
    else 
    {
        cout<<"enter valid 3 sides";
    }
    

  }

};
int main()
{
    operation obj;
    obj.circle();
    obj.rectangle();
    obj.triangle();

    return 0;
}