#include<iostream>
using namespace std;
class ThreeD
{
   int x,y,z;
   public:
         ThreeD();
         ThreeD(int ,int ,int );
         void Show();
         friend ThreeD operator +(int ,ThreeD );
         friend ThreeD operator +(ThreeD ,int );
};
ThreeD::ThreeD()
{
    x=y=z=0;
}
ThreeD::ThreeD(int i,int j,int k)
{
    x=i;
    y=j;
    z=k;
}
void ThreeD::Show()
{
    cout<<"x= "<<x<<"\ty= "<<y<<"\tz= "<<z<<endl;
}
ThreeD operator +(int constant,ThreeD t)    //b=10+a
{
    t.x=t.x+constant;
    t.y=t.y+constant;
    t.z=t.z+constant;
    return t;
}
ThreeD operator +(ThreeD t,int constant)    //b=a+10;
{
    t.x=t.x+constant;
    t.y=t.y+constant;
    t.z=t.z+constant;
    return t;
}
int main()
{
    ThreeD a(1,2,3),b;
    cout<<"a :\n";
    a.Show();
    cout<<"b :\n";
    b.Show();
    b=a+10;
    cout<<"Value of a after b=a+10 :\n";
    a.Show();
    cout<<"Value of b after b=a+10 :\n";
    b.Show();
    b=10+a;
    cout<<"Value of a after b=10+a :\n";
    a.Show();
    cout<<"Value of b after b=10+a :\n";
    b.Show();
    return 0;
}