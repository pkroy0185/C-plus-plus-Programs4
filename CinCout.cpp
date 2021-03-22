#include<iostream>
using namespace std;
class overload
{
    int val1,val2;
    public:
          friend istream& operator >>(istream &,overload &);
          friend ostream& operator <<(ostream &,overload &);
};
istream& operator >>(istream &din,overload &b)
{
    din>>b.val1>>b.val2;
    return din;
}
ostream& operator <<(ostream &dout,overload &b)
{
    dout<<b.val1<<"    "<<b.val2;
    return dout;
}
int main()
{
    overload c1;
    cout<<"Enter a and b of c1 : ";
    cin>>c1;
    cout<<"C1 is : \n"<<c1;
    return 0;
}