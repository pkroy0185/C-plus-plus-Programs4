#include<iostream>
using namespace std;
class overload
{
   int val1,val2;
   public:
         void GetData();
         void Display();
         friend overload operator +(overload , overload );
};
void overload::GetData()
{
    cout<<"Val1 : ";
    cin>>val1;
    cout<<"Val2 : ";
    cin>>val2;
}
void overload::Display()
{
    cout<<"Val1 : "<<val1<<"    Val2 : "<<val2<<endl;
}
overload operator +(overload c1,overload c2)
{
    overload temp;
    temp.val1=c1.val1+c2.val1;
    temp.val2=c1.val2+c2.val2;
    return temp;
}
int main()
{
    overload c1,c2,c3;
    cout<<"C1 :\n";
    c1.GetData();
    cout<<"C2 :\n";
    c2.GetData();
    c3=c1+c2;
    c3.Display();
    return 0;
}