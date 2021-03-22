#include<iostream>
using namespace std;
class ThreeD
{
   int x,y,z;
   public:
         ThreeD();
         ThreeD(int ,int ,int );
         void Show();
         friend ThreeD operator ++(ThreeD &);
         friend ThreeD operator ++(ThreeD &,int );
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
ThreeD operator ++(ThreeD &t)    // Prefix
{
    t.x++;
    t.y++;
    t.z++;
    return t;
}
ThreeD operator ++(ThreeD &t,int not_used)    //Postfix
{
    ThreeD temp=t;
    t.x++;
    t.y++;
    t.z++;
    return temp;
}
int main()
{
    ThreeD a(1,2,3),b;
    cout<<"a :\n";
    a.Show();
    ++a;
    cout<<"++a :\n";
    a.Show();
    a++;
    cout<<"a++ :\n";
    a.Show();
    b=++a;
    cout<<"Value of a after b=++a :\n";
    a.Show();
    cout<<"Value of b after b=++a :\n";
    b.Show();
    b=a++;
    cout<<"Value of a after b=a++ :\n";
    a.Show();
    cout<<"Value of b after b=a++ :\n";
    b.Show();
    return 0;
}