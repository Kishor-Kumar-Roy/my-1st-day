#include<iostream>
using namespace std;
class operation
{
  private:
  int p,q;
  public:
  void check()
  {
    cout<<"enter buy value:";
    cin>>p;
    cout<<"enter sell value:";
    cin>>q;
    if(p>q)
    {
        int loss=p-q;
        cout<<"loss is="<<loss;
    }
     else
    {
        int profit=q-p;
        cout<<"profit  is="<<profit;
    }

  }
};
int main()
{
    operation obj;
    obj.check();

    return 0;
}