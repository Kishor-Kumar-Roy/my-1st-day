#include<iostream>
using namespace std;
class myclass
{
    private:
   float phy,chem,bio,math,cs,full_marks=100;
   public:
   void calculate()
   {
    cout<<"enter marks of physics:";
    cin>>phy;
    cout<<"enter marks of chemistry:";
    cin>>chem;
    cout<<"enter marks of biology:";
    cin>>bio;
    cout<<"enter marks of math:";
    cin>>math;
    cout<<"enter marks of computer science:";
    cin>>cs;
    float percentage=((phy+chem+bio+math+cs)/500)*100;
    cout<<"percentage of the student is="<<percentage<<endl;
    if(percentage>=90)
    {
      cout<<"grade A";
    }
    else if(percentage>=80)
    {
      cout<<"grade B";
    }
    else if(percentage>=70)
    {
      cout<<"grade C";
    }
    else if(percentage>=60)
    {
      cout<<"grade D";
    }
    else if(percentage>=40)
    {
      cout<<"grade E";
    }
    else 
    {
      cout<<"grade F";
    }

   }
};
int main()
{
  myclass obj;
  obj.calculate();

    return 0;
}