#include<iostream>
using namespace std;
class overload
{
   int val1,val2;
   public:
         overload();
         overload(int a,int b);
         void Display();
         overload operator +(overload );
};
overload::overload()
{
}
overload::overload(int a,int b)
{
    val1=a;
    val2=b;
}
void overload::Display()
{
    cout<<"Val1 : "<<val1<<"    Val2 : "<<val2<<endl;
}
overload overload::operator +(overload c2)
{
    overload temp;
    temp.val1=val1+c2.val1;
    temp.val2=val2+c2.val2;
    return temp;
}
int main()
{
    overload c1(10,20),c2(30,40),c3;
    c3=c1+c2;
    c3.Display();
    return 0;
}