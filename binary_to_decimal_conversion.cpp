#include<iostream>
#include<cmath>
using namespace std;
class operation
{
    private:
    int n,d=0,i=0,arr[10];
    public:
    void convert()
    {
        cout<<"enter a binary number:";
        cin>>n;
        while(n!=0)
        {
            arr[i]=n%10;
            d=d+(arr[i]*pow(2,i));
            i++;
            n=n/10;
        }
        
            cout<<d;
    }
   
  
};
int main()
{
    operation obj;
    obj.convert();

    return 0;
}