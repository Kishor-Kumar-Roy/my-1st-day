#include<iostream>
using namespace std;
int main()
{
int p,q;
cout<<"enter lb and ub: ";
cin>>p>>q;

if(p<q)
{
    cout<<"prime numbers are= ";
    for(int i=p;i<q;i++)
    {
        int p=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                p=1;  //not prime
                break;
            }
        }
        if(p==0)
        {
            
            cout<<i<<" ";
        }
    }
}
else {
    cout<<"not valid!";
}
    return 0;
}
