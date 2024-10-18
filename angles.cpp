#include<iostream>
using namespace std;
class operation
{
    private:
    int angle1,angle2,angle3;
    public:
    void triangle()
    {
        cout<<"enter two angles of a triangle:";
        cin>>angle1>>angle2;
        angle3=180-(angle2+angle1);
        cout<<"angle3 of the triangle: "<<angle3;
    }
};

int main()
{
    operation obj;
    obj.triangle();

    return 0;
}