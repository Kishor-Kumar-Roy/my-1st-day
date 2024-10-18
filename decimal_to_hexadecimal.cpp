#include<iostream>
using namespace std;

class calculation
{
private:
    int deci,a[' '],i=0;
public:
    void decimal ()
    {
        cout << "Enter a decimal number: ";
        cin >>deci;
        while(deci!=0)
        {
         a[i]=deci%16;
         i++;
         deci=deci/16;
        }
        cout << "hexadecimal number is : ";
        for(i=i-1;i>=0;i--)
        {
        if(a[i]<10)
        {
        cout << a[i];
        }
        else
        {
        cout << char(a[i]+55) << endl;
        }
        }
        
    }
};
int main()
{
    calculation obj;
    obj.decimal();
    return 0;
}