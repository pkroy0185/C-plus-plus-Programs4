#include<iostream>
using namespace std;
class overload
{
   int val1,val2;
   public:
         overload();
         overload(int a,int b);
         void Display();
         void operator +(overload );
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
void overload::operator +(overload c2)
{
    val1=val1+c2.val1;
    val2=val2+c2.val2;
}
int main()
{
    overload c1(10,20),c2(30,40);
    c1+c2;
    c1.Display();
    return 0;
}