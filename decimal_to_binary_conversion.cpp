#include<iostream>
using namespace std;
class operation
{
    private:
    int n,i=0,arr[10];
    public:
    void convert()
    {
        cout<<"enter a decimal number:";
        cin>>n;
        while(n!=0)
        {
            arr[i]=n%2;
            i++;
            n=n/2;
        }
        for(i=i-1;i>=0;i--)
        {
            cout<<arr[i];
        }
    }
   
  
};
int main()
{
    operation obj;
    obj.convert();

    return 0;
}