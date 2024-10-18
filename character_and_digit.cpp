#include<iostream>
using namespace std;
class operation
{
    private:
  char p;
  public:
  void check()
  {
    cout<<"enter any character=";
    cin>>p;
    if(p>='a'&& p<='z')
    {
        cout<<"alphabet";
    }
       else if(p>=0 || p<=9)
    {
        cout<<"digit";
    }
      else 
    {
        cout<<"special char";
    }
      }
};
int main()
{
    operation obj;
    obj.check();

    return 0;
}