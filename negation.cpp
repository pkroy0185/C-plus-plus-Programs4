#include<iostream>
using namespace std;
class test
{
    int x,y,z;
    public:
        test(int ,int ,int );
        void Display();
        void operator ~();
};
test::test(int p,int q,int r)
{
    x=p;
    y=q;
    z=r;
}
void test::Display()
{
    cout<<x<<" "<<y<<" "<<z<<endl;
}
void test::operator ~()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    int p,q,r;
    cout<<"Enter p, q and r : ";
    cin>>p>>q>>r;
    test a(p,q,r);
    cout<<"a is : ";
    a.Display();
    cout<<endl;
    ~a;
    cout<<"~a is : ";
    a.Display();
    cout<<endl;
    return 0;
}