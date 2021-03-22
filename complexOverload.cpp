#include<iostream>
using namespace std;
class complex
{
    float a,b;
    public:
          complex operator +(complex );
          friend istream& operator >>(istream&,complex &);
          friend ostream& operator <<(ostream&,complex &);
};
istream& operator >>(istream &din,complex &c)
{
    din>>c.a>>c.b;
    return din;
}
ostream& operator <<(ostream &dout,complex &c)
{
    dout<<c.a<<"+("<<c.b<<")i"<<endl;
    return dout;
}
complex complex::operator +(complex c)
{
   complex sum;
   sum.a=a+c.a;
   sum.b=b+c.b;
   return sum;
}
int main()
{
    complex c1,c2,c3;
    cout<<"Enter a and b  c1 : ";
    cin>>c1;
    cout<<"Enter a and b  c2 : ";
    cin>>c2;
    c3=c1+c2;
    cout<<"Sum of both c1 and c2 is : ";
    cout<<c3;
    cout<<"c1, c2 and c3 are ...\n";
    cout<<c1<<c2<<c3;
    return 0;
}