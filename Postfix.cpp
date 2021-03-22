#include<iostream>
using namespace std;
class ThreeD
{
   int x,y,z;
   public:
         ThreeD();
         ThreeD(int ,int ,int );
         void Show();
         void operator ++(int );
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
void ThreeD::operator ++(int not_used)
{
    x++;
    y++;
    z++;
}
int main()
{
    ThreeD a(1,2,3);
    cout<<"a :\n";
    a.Show();
    a++;
    cout<<"a :\n";
    a.Show();
    a++;
    cout<<"a :\n";
    a.Show();
    return 0;
}